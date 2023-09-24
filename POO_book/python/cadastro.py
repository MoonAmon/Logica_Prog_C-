"""Cadastro de pessoas"""

class Pessoa(object):
    """ Classe Pessoa: responsável em armazenar dados de uma pessoa """

    __nome = ""
    __idade = -1
    __sexo = ''

    def __init__(self):
       """ Construtor Python """ 

    def cadastrar(self):
        """ Método cadastra: permite receber os dados de uma pessoa """
        self.__nome = input("Digite o seu nome: ")
        while self.__idade < 0:
            try:
                self.__idade = int(input("Digite sua idade: "))
            except ValueError:
                print("Digite um número inteiro!!")
            self.__sexo = input("Sexo: M para masculino F para feminino")
            self.__sexo = self.__sexo.upper()
            if self.__sexo != 'F':
                self.__sexo = 'M'

    def mostra(self):
        """ Método mostra: apresenta os dados cadastrados de uma pessoa """
        if self.__sexo == 'F' and self.__idade > 30:
            print(self.__nome + ' idade secreta ' + self.__sexo)
        else:
            print(self.__nome + ' ' + str(self.__idade) + ' ' + self.__sexo)

PESSOAS = list()
for i in range(3):
    OBJ = Pessoa()
    OBJ.cadastrar()
    PESSOAS.append(OBJ)

for PESSOA in PESSOAS:
    PESSOA.mostra()

print('Linha 42 ' + str(PESSOAS))
print('Linha 43 ' + str(PESSOAS[0]))
print('Linha 44 ' + str(PESSOAS[0].__dict__))
print('Linha 45 ' + str(PESSOAS[0].__dict__.keys()))
print('Linha 46 ' + str(PESSOAS[0].__dict__.values()))
PESSOAS[0]._Pessoa__idade = 'BalaDeMelancia'
print('Linha 47 ' + str(PESSOAS[0]._Pessoa__idade))
PESSOAS[0]._Pessoa__apelido = 'Cabeça de lampada'
print('Linha 44 ' + str(PESSOAS[0].__dict__))