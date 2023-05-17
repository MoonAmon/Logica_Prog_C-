#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float resto,raiz,eleva;
    int num;

    printf("Digite um numero: ");
    scanf("%d",&num);

    resto=num%2;

    if (resto==0)
    {
        raiz=sqrt(num);
        printf("Numero par! R da raiz:%f\n",raiz);
    } else {
        eleva=pow(num,2);
        printf("Numero impar! R da exponenciação: %f\n",eleva);
    }
    
    
    return 0;
}
