#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float sal;

    printf("digite seu saldo:");
    scanf("%f",&sal);

    double tax = sal/100;
    sal = sal + tax;

    printf("novo saldo: %f",sal);

    return 0;
}
