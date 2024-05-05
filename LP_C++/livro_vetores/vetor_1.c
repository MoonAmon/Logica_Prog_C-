#include <stdio.h>

int main(int argc, char const *argv[])
{
    char *matriz_A[10][100];

    for (int i = 0; i < sizeof(matriz_A); i++)
    {
        printf("Digite o número:\n");
        scanf("%s", &matriz_A[i]);
    }

    for (int i = 0; i < sizeof(matriz_A); i++)
    {
        printf("Indice %d: %s\n", i, matriz_A[i]);

    }
    
    

    return 0;
}

struct Carro
{
    nome;
    data;
    modelo;
} carro;

void function_carro(void){
    Carro 
}
