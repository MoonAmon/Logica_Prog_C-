# Atividade - sub-programas letra A - algoritmos

def cadastro(num):
    """Cadastro de num nomes no registro"""
    registroNomes = []
    for i in range(num):
        print("Index: {}".format(i))
        nome = str(input("Digite o nome: "))
        registroNomes.append(nome)
    return registroNomes

def pesquisar(registro):
    """Pesquisa nome no registro"""
    nomePesquisado = str(input("Digite o nome para pesquisa: "))
    for i, nome in enumerate(registro):
        if nomePesquisado == nome:
            print("Nome encontrado: {} Index {}".format(nomePesquisado,i))
            return nome 
    print("Nome não encontrado no registro!")


def classificarAlfabetico(registro):
    """Clissifica os nomes do registro em ordem alfabetica"""
    for i in range(len(registro)-1):
        for j in range(i+1,len(registro)):
            if registro[i] > registro[j]:
                trocaValores(registro, i, j)
    return registro

def trocaValores(registro, index1, index2):
    """Faz a troca dos indexs fornecido dentro do registro"""
    X = registro[index1]
    registro[index1] = registro[index2]
    registro[index2] = X

def apresentar(registro):
    """Apresenta os nomes no registro fornecido"""
    for i,nome in enumerate(registro):
        print("Nome: {} index: {} ".format(nome,i))


opcao = 0
registroDef = []
while True:
    opcao = int(input("\n1 - Cadastro de nomes\n"
                      "2 - Pesquisar nome no registro\n"
                      "3 - Classificar por ordem alafabética\n"
                      "4 - Apresentar registro\n"
                      "5 - Sair\n"
                      "Digite uma opção: "))

    if opcao == 1:
        registroDef = cadastro(5)
    if opcao == 2:
        pesquisar(registroDef)
    if opcao == 3:
        classificarAlfabetico(registroDef)
    if opcao == 4:
        apresentar(registroDef)
    if opcao == 5:
        print("Saindo...")
        break

