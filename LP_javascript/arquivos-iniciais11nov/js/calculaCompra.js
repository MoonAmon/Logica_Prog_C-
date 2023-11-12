const botaoCalcula = document.getElementById("calcula");
const meuModal = document.getElementById("meuModal");
const close = document.getElementsByClassName("close")[0];

botaoCalcula.addEventListener("click", () => {
    let compras = [];
    camposTexto.forEach((campo) => {
        if(campo.value) { 
            compras.push({
                nome: campo.name,
                preco: campo.getAttribute("data-preco"),
                quantidade: campo.value
            });
        }
    });

    if(compras.length > 0) {
        let compraTexto = '<table><tr><th>Quantidade</th><th>Nome</th><th>Preço Total</th></tr>';
        let total = 0;
        compras.forEach(compra => {
            let preco = compra.quantidade * compra.preco;
            total += preco;
            compraTexto += `<tr>
                                <td>${compra.quantidade} kg</td> 
                                <td>${compra.nome}</td> 
                                <td>R$ ${preco.toFixed(2)}</td>
                            </tr>
                            `;
        });
        compraTexto += `<td colspan="2">Total</td><td>R$ ${total.toFixed(2)}</td></tr></table>`
        document.getElementById("resultado").innerHTML = compraTexto;
        meuModal.style.display = "block";
    }
});

close.onclick = function() {
    meuModal.style.display = "none";
}

window.onclick = function(event) {
    if(event.target == meuModal) {
        meuModal.style.display = "none";
    }
}