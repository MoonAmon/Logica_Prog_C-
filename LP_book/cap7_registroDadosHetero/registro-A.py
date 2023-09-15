

class AGENDA:
    def __init__(self, nome:str, telefone:int, endereco:str):
        self.nome = nome
        self.telefone = telefone
        self.endereco = endereco


Agenda = [AGENDA("",0,"") for _ in range(10)]

for i in range(10):
    print("Contato %d \n" % (i + 1))

    Agenda[i].nome = input("Digite o nome: ")
    Agenda[i].telefone = input("Digite o número de telefone: ")
    Agenda[i].endereco = input("Digite o endereço: ")

achou = False
cont = 0
procura = input("Digite o nome do contato que deseja procurar: ")

while achou == False and cont < 10:
    if procura == Agenda[cont].nome:
        achou = True
    else:
        cont += 1

if achou == True:
    print("Contato procurado:")

    print("Nome: " + Agenda[cont].nome)
    print("Telefone: " + Agenda[cont].telefone)
    print("Endereço: " + Agenda[cont].endereco)


else:
    print("Contato não encontrado!")

for i in range(9):
    for j in range(i + 1, 10, 1):
        if Agenda[i].nome > Agenda[j].nome:
            X = Agenda[i]
            Agenda[i] = Agenda[j]
            Agenda[j] = X

for i in range(10):
    print("Contado %d", i + 1)

    print("Nome: " + Agenda[i].nome)
    print("Telefone: " + Agenda[i].telefone)
    print("Endereço: " + Agenda[i].endereco)
