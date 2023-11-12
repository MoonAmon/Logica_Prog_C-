const camposTexto = document.querySelectorAll("[type=text]");
console.log(camposTexto);

const spanErro = document.getElementById("erro");
console.log(spanErro);

camposTexto.forEach((campo) => {
    campo.addEventListener("input", () => validaCampo(campo));
    campo.addEventListener("blur", () => validaCampo(campo));
});

const botoesOperacao = document.querySelectorAll("[type=button]");
console.log(botoesOperacao);
const campoResultado = document.getElementById("resultado");

botoesOperacao.forEach((botao) => {
    botao.addEventListener("click", () => {
        let soma = 0; multiplicacao = 1, valor=0;
        let filledFields = 0;

        camposTexto.forEach((campo) => {
            if(campo.value){
                valor = Number(campo.value);
                filledFields++;
            }
        });

        if (filledFields >= 2) {
           camposTexto.forEach((campo) => {
                if(campo.value){
                    valor = Number(campo.value);
                    if (botao.value == "soma") {
                        soma += valor;
                        campoResultado.innerHTML = soma;
                    }
                    else if (botao.value == "multiplica") {
                        multiplicacao *= valor;
                        campoResultado.innerHTML = multiplicacao;
                    }
                }
           });
        }
    });
});