#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float num;
    float den;

    printf("Digite o numerador: ");
    scanf("%f",&num);

    printf("Digite o denominador: ");
    scanf("%f",&den);

    while (num>1000||den>1000)
    {
        printf("Numero invalido, digite um numero de 0 a 999!");
        return 0;
    }
    

    if (num<100 && den<100)
    {
        float X=num*100;
        float Y=X+den;
        double result=Y/100;
        printf("Resultado: %lf",result);
    }

    if (num<1000 && den<1000)
    {
        float X=num*1000;
        float Y=X+den;
        double result=Y/1000;
        printf("Resultado: %lf",result);
    }
    

    

    return 0;
}
