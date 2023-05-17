#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float altA,altB;

    printf("Digite a altura da pessoa A: ");
    scanf("%f",&altA);
    printf("Digite a altura da pessoa B: ");
    scanf("%f",&altB);

    if (altA>altB)
    {
        printf("Pessoa A e maior que pessoa B!\n");
    } else {
        printf("Pessoa B e maior que pessoa A!\n");

    }

    return 0;
}
