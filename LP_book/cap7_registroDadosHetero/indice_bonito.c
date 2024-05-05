#include <stdio.h>

typedef struct produto
{
    int codigo;
    int vencimento[3], fabricacao[3];
    float preco;
}Produto;

int main(int argc, char const *argv[])
{
    Produto produto[3];
    int soma_data[3], menor = 0;

    for (int i = 0; i < 3; i++)
    {

    scanf("%d %d %d %d %d %d %d %f", &produto[i].codigo, 
                                    &produto[i].fabricacao[0],
                                    &produto[i].fabricacao[1],
                                    &produto[i].fabricacao[2],
                                    &produto[i].vencimento[0],
                                    &produto[i].vencimento[1],
                                    &produto[i].vencimento[2],
                                    &produto[i].preco);

    soma_data[i] = produto[i].vencimento[0] + produto[i].vencimento[1] + produto[i].vencimento[2];

        for (int j = 0; j < 3; j++)
        {
            produto[i].fabricacao[j] = produto[i].fabricacao[j];
            produto[i].vencimento[j] = produto[i].vencimento[j];
        }
        
    }


    for (int i = 0; i < 3; i++)
    {
        if (soma_data[menor] > soma_data[i] )
            menor = i;
        else if (soma_data[menor] == soma_data[i])
            if (produto[i].vencimento[1] < produto[i])
    }      
    
    printf("%d - %d / %d / %d", produto[menor].codigo,
                                produto[menor].vencimento[0], 
                                produto[menor].vencimento[1],
                                produto[menor].vencimento[2]);

    return 0;
}


