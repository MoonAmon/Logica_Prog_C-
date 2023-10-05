function inclui()
{
with (document.formulario_frutas)
{
    if (novo.value == "")
    {
    document.getElementById('erro').innerHTML = "Escreva um novo item";
    novo.focus();
    return;
    }
    let tam = frutas.length;
    frutas.options[tam] = new Option(novo.value);
}
}

function escreve()
{
with (document.formulario_frutas)
{
    var ind = frutas.selectedIndex;
    selecionado.value = frutas.options[ind].text
}
}

function apaga()
{
with (document.formulario_frutas)
{
    frutas[frutas.selectedIndex] = null;
    escreve();
}
}

function muda()
{
with (document.formulario_frutas)
{
    if (novo.value == "")
    {
    document.getElementById('erro').innerHTML = "Escreva um novo item";
    novo.focus();
    return;
    }
    var ind = frutas.selectedIndex;
    frutas.options[ind].text = novo.value;
    escreve();
}
}

const inputs_links = document.querySelectorAll("input");
const select_link = document.getElementById("select");

for (i = 0; i < inputs_links.length; i++) {
   if (inputs_links[i].name === 'selecionado') {
    inputs_links[i].addEventListener("focus", function () {
       this.form.novo.focus(); 
    }) 
   } else if (inputs_links[i].value === 'acrescentar') {
    inputs_links[i].addEventListener("click", function () {
       inclui(); 
    })
   } else if (inputs_links[i].value === 'apagar') {
    inputs_links[i].addEventListener("click", function () {
        apaga();
   })
    } else if (inputs_links[i].value === 'mudar') {
    inputs_links[i].addEventListener("click", function () {
        muda();
   }) }
}

select_link.addEventListener("change", function () {
   escreve();
})