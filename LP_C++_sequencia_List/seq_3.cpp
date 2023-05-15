#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int num;
    int ant;
    int suc;

    printf("Digite um numero:\n");
    scanf("%d",&num);

    ant = num - 1;
    suc = num + 1;

    printf("Antecessor de %d:%d\n",num,ant);
    printf("Sucessor de %d:%d",num,suc);

    return 0;
}
