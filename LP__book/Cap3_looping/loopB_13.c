#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int num;
    float md=0;
    int i=0;
    int soma=0;

    for (i = 1; i <= 10; i++)
    {
        printf("Digite um numero %d:",i);
        scanf("%d",&num);
        soma=num+soma;

    }

    md=soma/10;

    printf("Resultados:\n Soma=%d\n Media=%.2f\n",soma,md);
    
    return 0;
}
