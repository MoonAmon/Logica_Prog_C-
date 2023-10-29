import idadeApropriada from "./validaIdade.js";
import validaSenha from "./validaSenha.js";

const tipos_de_erros = [
    'valueMissing',
    'typeMismatch',
    'tooShort',
    'customError'
];

const mensagens = {
    nome: {
        valueMissing: "O campo de nome não pode estar vazio.",
        tooShort: "Por favor, preencha um nome válido."
    },
    email: {
        valueMissing: "O campo de e-mail não pode estar vazio.",
        typeMismatch: "Por favor, preencha um e-mail válido.",
        tooShort: "Por favor, preencha um e-mail válido."
    },
    data_nasc: {
        valueMissing: "O campo de data de nascimento não pode estar vazio.",
        customError: "Você deve ter no mínino 13 anos para se cadastrar.",
        tooLong: "Por favor, preencha uma data válida."
    },
    termo: {
        valueMissing: "Você deve aceitar nossos termos antes de se cadastrar."
    },
    senha: {
        valueMissing: "O campo de senha não pode estar vazio.",
        tooShort: "A senha deve ter no mínimo 8 caracteres.",
        customError: "A senha deve conter ao menos uma letra maiúscula, uma minúscula e um número.",
        tooLong: "A senha deve conter no máximo 15 caracteres."
    }
}

const camposObgatorios = document.querySelectorAll("[required]");

camposObgatorios.forEach((campo) => {
    campo.addEventListener("blur",() => validaCampo(campo));
});

function validaCampo(campo) {
    let mensagem = '';
    campo.setCustomValidity('');
    if(campo.name == "data_nasc" && campo.value != ""){
       idadeApropriada(campo);
    }

    if(campo.name == "senha" && campo.value != ""){
        validaSenha(campo);
    }

    if(campo.email == "email" && campo.value != ""){
        validaEmail(campo);
    }

    tipos_de_erros.forEach( (erro) => {
            if(campo.validity[erro]){
                mensagem = mensagens[campo.name][erro];
            }
        }

    );

    const spanError = campo.parentNode.querySelector('.mensagem-erro');
    const campoValido = campo.checkValidity();
    if(!campoValido){
        spanError.innerHTML = mensagem;
    } else {
        spanError.innerHTML = '';
    }
}

const formulario = document.querySelector("[name=cadastro]");
formulario.addEventListener("submit", (evento) => {
    evento.preventDefault();
    window.location.href = "../pages/sucesso.html";
});