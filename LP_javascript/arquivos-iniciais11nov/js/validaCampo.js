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

   if (campo.validity.valueMissing) {
       spanErro.innerHTML = "Preencha um valor válido!";
       campo.classList.add("foco");
    
   }
   else if(campo.validity.patternMismatch) {
       spanErro.innerHTML = "Preencha um número ou decimal!";
       campo.classList.add("foco");
   }
}