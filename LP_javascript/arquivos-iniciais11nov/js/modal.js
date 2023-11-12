var modal = document.getElementById('myModal');
var span = document.getElementById("resultado")[0];

span.onclick = function() {
    modal.style.display = "none";
}

window.onclick = function(event) {
    if (event.target == modal){
        modal.style.display = "none";
    }
}