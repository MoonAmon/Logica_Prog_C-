#include <iostream>
#include <limits>
#include <exception>
#include "carro.h"

using namespace std;

Carro::Carro(){
    this->modelo = "Fusca";
    this->ano = 1981;
    this->preco = 5000;
    this->cor = "Azul";
    totalCarros++;
    cout << "Método construtor chamado.";
    cout << "Nenhum modelo configurado, este será um Fusca" << endl;
}

Carro::Carro(string modelo, int ano, float preco, string cor) {
    this->modelo = modelo;
    this->ano = ano;
    this->preco = preco;
    this->cor = cor;
    totalCarro++;
    cout << "Método construtor do carro " << this->modelo << endl;
}

Carro::~Carro() {
    totalCarro--;
    cout << "Método destrutor chamado para o carro "<< this->modelo << endl;
}

string Carro::getModelo() {
    return this->modelo;
}

void Carro::setModelo(string novo_modelo) {
    this->modelo = novo_modelo;
}

string Carro::getCor() {
    return this->cor;
}

void Carro::setCor(string nova_cor) {
    this->cor = nova_cor;
}

int Carro::getAno() {
    return this->ano;
}

void Carro::setAno(string novo_ano) {
    try
    {
        this->setAno(stoi(novo_ano));
    }
    catch(exception e) {}
    
}

void Carro::setAno(int novo_ano) {
    this->ano = novo_ano;
}

float Carro::getPreco() {
}