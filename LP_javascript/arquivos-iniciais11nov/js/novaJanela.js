function abreNovaJanela(compras) {
    const largura = Math.min(380, window.innerWidth);
    const altura = Math.min(480, window.innerHeight);

    let janela = window.open(
        "",
        "",
        `width=${largura},height=${altura},left=${largura},top=50`
    );

    janela.document.write("<html><head><title>Extrato de Compras</title><link rel='stylesheet' type='text/css' href='style.css'></head>");

    janela.document.write("<body><section id='principal'><h3>Feira Online: Extrato de Compras</h3><hr>");

    janela.document.write("<table><thead><tr><th>Produto</th><th>Quantidade</th><th>Preço</th></tr></thead><tbody>");

    let total = 0;
    compras.forEach((item) => {
       janela.document.write(`<tr><td>${item.nome}</td><td>${item.quantidade} kg</td><td>${item.preco}</td></tr>`); 

       total += item.quantidade * item.preco;
    });

    janela.document.write("</tbody></table><hr>");

    janela.document.write(`<tr><td colspan="3">Total: R$ ${total.toFixed(2)}</td></tr><br>`);

    janela.document.write('<button onclick="window.close()">Fechar</button>');
    janela.document.write("</section></body></html>");
}
