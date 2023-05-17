#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int base,exp,x;

    printf("digite a base: ");
    scanf("%d",&base);

    printf("digite o expoente: ");
    scanf("%d",&exp);

    x=pow(base,exp);

    printf("potência: %d\n",x);


    return 0;
}
