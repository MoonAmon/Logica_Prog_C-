const camposTexto = document.querySelectorAll("[type=text]");
console.log(camposTexto);

const spanErro = document.getElementById("erro");
console.log(spanErro);

camposTexto.forEach((campo) => {
    campo.addEventListener("input", () => validaCampo(campo));
    campo.addEventListener("blur", () => validaCampo(campo));
});

function validaCampo(campo) {
   spanErro.innerHTML = ""; 
   campo.classList.remove("foco");

   if(campo.validity.patternMismatch) {
       spanErro.innerHTML = "Preencha um número inteiro ou decimal!";
       campo.classList.add("foco");
   }
}