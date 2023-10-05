function clicou()
			{
				if(checkbox.checked)
					alert("O campo está selecionado !");
				else
					alert("Campo desmarcado !");
			}

const checkbox = document.getElementById("checkbox");
checkbox.addEventListener("click", clicou);