#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int num1;
    int num2;
    int rst;

    printf("Digite primeiro numero para soma:\n");
    scanf("%d",&num1);

    printf("Digite segundo numero para soma:\n");
    scanf("%d",&num2);

    rst = num1 + num2;

    printf("SOMA=%d\n",rst);

    return 0;
}
