export default function validaSenha(campo) {
    const senha = campo.value;
    const letraMaiuscula = /[A-Z]/;
    const letraMinuscula = /[a-z]/;
    const numero = /[0-9]/;
    const caracteresEspeciais = /[!|@|#|$|%|^|&|*|(|)|-|_]/;

    if (!letraMaiuscula.test(senha)){
        campo.setCustomValidity("Você precisa informar ao menos uma letra maiúscula");
    } 
    else if (!letraMinuscula.test(senha)){
        campo.setCustomValidity("Você precisa informar ao menos uma letra minúscula");
    } 
    else if (!numero.test(senha)){
        campo.setCustomValidity("Você precisa informar ao menos um número");
    }
    else if (!caracteresEspeciais.test(senha)){
        campo.setCustomValidity("Você precisa informar ao menos um caractere especial");
    }
}