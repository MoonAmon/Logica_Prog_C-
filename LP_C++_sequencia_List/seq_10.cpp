#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float raio;
    const float pi=3.14;

    printf("Digite o raio do círculo: ");
    scanf("%f",&raio);

    float peri=(2*pi*raio);
    float area=((raio*raio)*pi);

    printf("O perímetro desse circulo: %f\n",peri);
    printf("A área desse circulo: %f\n",area);


    return 0;
}
