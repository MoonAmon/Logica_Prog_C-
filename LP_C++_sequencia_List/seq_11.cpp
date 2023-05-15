#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float base;
    float alt;

    printf("digite a altura do triangulo: ");
    scanf("%f",&alt);

    printf("Digite a base do triangulo: ");
    scanf("%f",&base);

    float area = ((base*alt)/2);

    printf("A area do triangulo: %f\n",area);
    
    return 0;
}
