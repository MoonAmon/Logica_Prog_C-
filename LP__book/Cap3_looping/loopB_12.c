#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int num,x,ant,rest;
    int i=1;
    int y=0;

    for (i = 0; i < 15; i++)
    {

    printf("Digite um numero %d: ",i);
    scanf("%d",&num);

    ant=num-1;

    do
    {
        x=num*ant;
        y=x+y;
        printf("%d*%d=%d\n",num,ant,y);
        ant=ant-1;

    } while (ant>0);
    
    rest=y+rest;

    }

    printf("Resultado %d\n",rest);

    return 0;
}
