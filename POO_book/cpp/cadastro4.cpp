/*
Programa: cadastro4
*/
#include <iostream>
#include <limits>
#include "parametros.h"

using namespace std;

struct Pessoa
{
    string nome;
    int idade;
    char sexo;
};

int x; // Variavel de controle

/*  Função para cadastro dos nomes  */
void cadastrar(Pessoa *cad) {
    int inputSexo;

    for (x = 0; x < N; x++)
    {
        cout << "Digite o nome: ";
        cin >> cad[x].nome;

        /*  Validação de input: Permitir números inteiros e não aceitar números negativos */
        do
        {
            cout << "Digite a idade: ";
            cin >> cad[x].idade;
            if (cin.fail())
            {
                cout << "Digite um número inteiro./n";
                cin.clear();
                cin.ignore(std::numeric_limits<streamsize>::max(), '\n');
                cad[x].idade = -1; // Forçar permanecer no laço do... while
            }
            
        } while (cad[x].idade < 0);

        /*  Validação do Sexo: 1 para masculino, 2 para feminino.   */
    cout << "Selecione o sexo: 1) Masculino 2) Feminino/n";
    cin >> inputSexo;
    
    switch (inputSexo)
    {
    case 1:
        cad[x].sexo = 'M';
        break;
    case 2:
        cad[x].sexo = 'F';
        break;
    default:
        cad[x].sexo = 'M';
        break;
    }
        
    }
    
}

/*  Função para mostrar os cadastros   */

void mostrar(Pessoa *cad) {
    cout << "-------------------------------------------" << endl;
    for (x = 0; x < N; x++)
    {
        if (cad[x].sexo == 'F' && cad[x].idade >= 30)
        {
            cout << cad[x].nome;
            cout << "   não é elegante revelar a idade de uma mulher.  " << endl;
        } else {
            cout << cad[x].nome << " - ";
            cout << cad[x].idade << " anos - " << cad[x].sexo << endl;
        }
        
    }
    cout << "-------------------------------------------" << endl;
}

/*  Função hackeando   */
void hackeando(Pessoa *cad) {
    cad[1].nome = "hackeados meno";
    cad[1].idade = 1000;
    cad[1].sexo = 'y';
}

/*  Função principal (main) */
int main() {
    Pessoa cadastro[N];

    cadastrar(cadastro);
    mostrar(cadastro);
    hackeando(cadastro);
    mostrar(cadastro);

    return 0;
}