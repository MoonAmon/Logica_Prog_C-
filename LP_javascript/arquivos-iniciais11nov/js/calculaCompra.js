const botaoCalcula = document.getElementById("calcula");

botaoCalcula.addEventListener("click", () => {
    let compras = [];
    camposTexto.forEach((campo) => {
        if(campo.value) { compras.push({
            nome: campo.name,
            preco: campo.getAttribute("data-preco"),
            quantidade: campo.value
        });
    }
    });

    if(compras.length > 0) {
        abreNovaJanela(compras);
    }
});