/*
Programa: cadastro4
*/
#include <iostream>
#include <limits>
#include "parametros.h"

using namespace std;

class Pessoa {
    private:
    string nome;
    int idade;
    char sexo;

    public:
    Pessoa(){
    }

    void cadastrar() {
        int inputSexo;
        cout << "Digite o nome: ";
        cin >> nome;

        /*  Validação de input: Permitir números inteiros e não aceitar números negativos */
        do {
            cout << "Digite a idade: ";
            cin >> idade;
            if (cin.fail())
            {
                cout << "Digite um número inteiro./n";
                cin.clear();
                cin.ignore(std::numeric_limits<streamsize>::max(), '\n');
                idade = -1; // Forçar permanecer no laço do... while
            }
            
        } while (idade < 0);

        cout << "Selecione o sexo: 1) Masculino 2) Feminino/n";
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


/*  Função principal (main) */
int main() {
    Pessoa cadastro[N];
    for (int x = 0; x < N; x++)
    {
        cadastro[x].cadastrar();
    }
    //cout << cadastro[x].nome;
    for (int x = 0; x < N; x++)
    {
        cadastro[x].mostrar();
    }

    return 0;
}
    
    void mostrar() {
        if (sexo == 'F' && idade >= 30)
        {
            cout << nome;
            cout << "   não é elegante revelar a idade de uma mulher.  " << endl;
        } else {
            cout << nome << " - ";
            cout << idade << " anos - " << sexo << endl;
        }
        
    }
};

/*  Função principal (main) */
int main() {
    Pessoa cadastro[N];
    for (int x = 0; x < N; x++)
    {
        cadastro[x].cadastrar();
    }
    cout << cadastro[0].nome;
    for (int x = 0; x < N; x++)
    {
        cadastro[x].mostrar();
    }

    return 0;
}