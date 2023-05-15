#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int num;
    float resto;

    printf("Digite um numero: ");
    scanf("%d",num);

    resto=num%2;

    if (resto==0)
    {
        printf("Numero par!\n");
    } else {

        printf("Numero impar!\n");
    } if (num>0)
    {
        printf("Numero positivo!\n");
        
    } else {
         printf("Numero negativo!\n");
    }
    
    

    return 0;
}
