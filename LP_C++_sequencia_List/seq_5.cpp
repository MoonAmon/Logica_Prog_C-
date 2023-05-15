#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float num;
    float ter;

    printf("Digite numero:");
    scanf("%f",&num);

    ter=num/3;

    printf("1/3 de %.0f = %.2f",num,ter);

    return 0;
}
