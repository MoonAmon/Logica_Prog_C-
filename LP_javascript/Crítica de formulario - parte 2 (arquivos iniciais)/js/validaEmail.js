export default function validaEmail(campo) {
    const email_regex = /^[a-z0-9.]+@[a-z0-9]+\.[a-z]+\.([a-z]+)?$/i;

    if (!email_regex.test(campo.value)) {
        campo.setCustomValidity("Por favor, preencha um e-mail válido.");
    }
}