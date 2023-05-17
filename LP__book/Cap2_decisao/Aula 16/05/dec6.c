#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float x,y,z,s1,s2,s3;

    printf("Digite o lado x do triangulo: ");
    scanf("%f",&x);
    printf("Digite o lado y do triangulo: ");
    scanf("%f",&y);
    printf("Digite o lado z do triangulo: ");
    scanf("%f",&z);

    s1=x+y;
    s2=x+z;
    s3=z+y;

    if (z<s1 || y<s2 || x<s3)
    {
        printf("Não é triangulo!\n");

    } else if (z==x||y==x||z==y)
    {
        if (x!=y&&y!=)
        {
            /* code */
        }
        
    }
    
    


    return 0;
}
