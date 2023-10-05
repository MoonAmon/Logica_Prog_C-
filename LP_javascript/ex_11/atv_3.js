function convertField(field){
    if(document.form1.conversion.checked)
        field.value = field.value.toUpperCase();
}

function convertAllFields(casechange){
    with (document.form1){
        if (casechange == "upper"){
            lastname.value = lastname.value.toUpperCase();
            firstname.value = firstname.value.toUpperCase();
        } else if (casechange == "lower") {
            lastname.value = lastname.value.toLowerCase();
            firstname.value = firstname.value.toLowerCase();
        } 
            
    }
}

const radio_upper = document.getElementById("upper");
const radio_lower = document.getElementById("lower");

radio_lower.addEventListener("change", function () {
    convertAllFields("lower");
});
radio_upper.addEventListener("change", function () {
   convertAllFields("upper"); 
});

const input_lastname = document.getElementById("lastname");
const input_firstname = document.getElementById("firstname");

input_lastname.addEventListener("input", function() {
  convertField(input_lastname);
});
input_firstname.addEventListener("input", function() {
  convertField(input_firstname);
});
