#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float alt;
    float base;

    printf("digite a altura do retângulo:");
    scanf("%f",&alt);

    printf("digite a base do retângulo:");
    scanf("%f",&base);

    float area = base*alt;
    float peri = (base*2)+(alt*2);

    printf("perímetro: %f\n",peri);
    printf("área: %f\n",area);

    return 0;
}
