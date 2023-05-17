#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int ano,idade;
    
    printf("Digite o ano que vc nasceu: ");
    scanf("%d",&ano);
    idade=2023-ano;

    if (idade>18)
    {
        printf("Você tem mais de 18 anos!");
    } else if (idade>=15 && idade>= 18)
    {
        printf("Você tem entre 18 a 15 anos!");
        
    } else {
        printf("Você tem menos de 15 anos!");

    }
    
    

    return 0;
}
