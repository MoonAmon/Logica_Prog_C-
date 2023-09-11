# programa que tem como entrada n valores e apresenta em ordem alfabetica ascendente
# dividido em subprogramas (Entrada, Processamento, Ordenação, Troca, Saída)

def entrada(n):
    """Faz a entrada de n valores e retorna lista com os mesmo"""
    lista=[]
    for i in range(n):
        valor = input("Digite o valor "+str(i+1)+": ")
        lista.append(valor)
    return lista

def troca(lista, indice1, indice2):
    """troca de valores das variaveis A e B"""
    x=lista[indice1]
    lista[indice1]=lista[indice2]
    lista[indice2]=x

def ordenacaoAscendente(lista):
    """Ordena valores me ordem alfabetica ascendente"""
    for i in range(len(lista)-1):
        for j in range(i+1,len(lista)):
            nome1 = lista[i]
            nome2 = lista[j]
            if nome1[0] > nome2[0]:
                troca(lista,i,j)
    return lista

def processamento(lista):
    """Processamento do programa"""
    ordenacaoAscendente(lista)
    return lista       

def saida(lista):
    """Print no conteudo da lista"""
    for i in range(len(lista)):
        print("Index " + str(i) + ": " + str(lista[i]))


lista = entrada(5)
processamento(lista)
saida(lista)