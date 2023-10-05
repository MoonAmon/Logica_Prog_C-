
function nothing() {
}

function clica() {
    document.saida.texto.value = " clicou ";
    
}

function entrei(name) {
    document.saida.texto.value = name;
}

function leave() {
    document.saida.texto.value = " saiu ";
    
}

const links = document.querySelectorAll("a");
links.forEach((link) => {
    link.addEventListener("click", clica);
    link.addEventListener("mouseout", leave);
    link.addEventListener("mouseover", (evento) => {
        entrei(evento.target.name);
    });

});

/*
for (let i = 0; i < links.length; i++) {
   links[i].addEventListener("click", clica);
   links[i].addEventListener("mouseout", leave);
   links[i].addEventListener("mouseover", (evento) => {
    console.log(evento.target.name);
   })

}
*/
