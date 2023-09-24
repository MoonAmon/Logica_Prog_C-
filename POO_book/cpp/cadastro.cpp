#include <iostream>
#include <limits>
#include "cadastro.h"

using namespace std;

Pessoa::Pessoa() {
    }

void Pessoa::cadastrar() {
    int inputSexo;
    cout << "Digite o nome: ";
    cin >> nome;

    /*  Validação de input: Permitir números inteiros e não aceitar números negativos   */

    do
    {
        cout << "Digite a idade: ";
        cin >> idade;
        if (cin.fail())
        {
            cout << "Digite um número inteiro. \n";
            cin.clear();
            cin.ignore(std::numeric_limits<streamsize>::max(), '\n');
            idade = -1; // Forçar permanecer no laço do... while
        }
        
    } while (idade < 0);
    
    /*  Validação do Sexo  */
    cout << "Selecione o sexo: 1) Masculino 2) Feminino\n";
    cin >> inputSexo;
    switch (inputSexo)
    {
    case 1:
            sexo = 'M';
        break;
    case 2:
            sexo = 'F';
        break;
    default:
            sexo = 'M';
        break;
    
    }
}

void Pessoa::mostrar() {
    if (sexo == 'F' && idade >= 30)
    {
        cout << nome << " não é elegante revelar a idade de uma mulher. " << endl;
    } else {
        cout << nome << "-" << idade << "anos-" << sexo << endl;
    }
    
}
