#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int num =0; 
    float cont, media, sum= 0;
    do
    {
        printf("digite num: \n");
        scanf("%d",&num);
        sum+=num;
        cont++;

    } while (num!=0);
    media = sum/cont;
    printf("md: %.2f\n qtd num: %4.f\n soma: %4.f\n",media,cont,sum);

    return 0;
}