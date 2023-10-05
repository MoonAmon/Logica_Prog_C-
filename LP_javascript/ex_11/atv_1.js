
function ehDigito(caractere)
{
    return((caractere >= "0") && (caractere <= "9"));
}
//verifica se o telefone está correto
function verificaTelefone()
{
    let telef = input.value;
    for(i = 0; i < telef.length; i++)
        if (!ehDigito(telef.charAt(i)))
        {
            document.getElementById('erro').innerHTML = "Caractere '"+telef.charAt(i)+"' inválido: deve ser número!";
            input.focus();
            return false;
        } else {
            document.getElementById('erro').innerHTML = "";
            input.focus();
        }
    return true;
}

const input = document.getElementById("input_tel");
input.addEventListener("keydown", verificaTelefone);