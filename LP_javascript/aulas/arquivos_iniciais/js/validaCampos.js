function validaCampo(campo) {
    spanErro.innerHTML = "";
    campo.classList.remove("foco");
    console.log(campo.validity);

    if(campo.validity.valueMissing)
    {
        spanErro.innerHTML = "Preencha um valor válido!";
        campo.classList.add("foco");
    }
    else if(campo.validity.patternMismatch)
    {
        spanErro.innerHTML = "Preencha um número ou decimal!";
        campo.classList.add("foco");
    }

}