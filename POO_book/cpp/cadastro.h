#ifndef CADASTRO_H
#define CADASTRO_H

#include <string> // Added this line to include the string library

using namespace std;

class Pessoa
{
    private:
        string nome;
        int idade;
        char sexo;
    public:
        Pessoa();
        void cadastrar();
        void mostrar();
};        
#endif