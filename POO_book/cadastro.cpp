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
    
}