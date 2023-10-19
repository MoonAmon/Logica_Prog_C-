function validaIdade(data) {
    const hoje = new Date();
    const dataNascValida = new Date(data.getUTCFullYear() + 13, data.getUTCMonth(), data.getUTCDay());
    return hoje >= dataNascValida;

}

export default function idadeApropriada(campo){
    const dataNascimento = new Date(campo.value);
    if(!validaIdade(dataNascimento)){
        campo.setCustomValidity("Você ainda não tem idade suficiente!");
        console.log(campo);
    }

}