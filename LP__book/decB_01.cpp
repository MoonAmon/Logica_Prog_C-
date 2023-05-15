#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int A,B,C,D;

    printf("Digite o numero A: ");
    scanf("%d",&A);
    printf("Digite o numero B: ");
    scanf("%d",&B);
    printf("Digite o numero C: ");
    scanf("%d",&C);
    printf("Digite o numero D: ");
    scanf("%d",&D);

    float Res2A=A%2;
    float Res3A=A%3;

    float Res2B=B%2;
    float Res3B=B%3;

    float Res2C=C%2;
    float Res3C=C%3;

    float Res2D=D%2;
    float Res3D=D%3;

    if (Res2A==0 || Res3A==0)
    {
        if (Res2A==0)
        {
            printf("Numero %d é divísivel por 2:\n",A);
        } if (Res3A==0) {
            printf("Numero %d é divísivel por 3:\n",A);
        }
        
    }
    if (Res2B==0 || Res3B==0)
    {
        if (Res2B==0)
        {
            printf("Numero %d é divísivel por 2:\n",B);
        } if (Res3B==0) {
            printf("Numero %d é divísivel por 3:\n",B);
        }
        
    }
    if (Res2C==0 || Res3C==0)
    {
        if (Res2C==0)
        {
            printf("Numero %d é divísivel por 2:\n",C);
        } if (Res3C==0) {
            printf("Numero %d é divísivel por 3:\n",C);
        }
        
    }
    if (Res2D==0 || Res3D==0)
    {
        if (Res2D==0)
        {
            printf("Numero %d é divísivel por 2:\n",D);
        } if (Res3D==0) {
            printf("Numero %d é divísivel por 3:\n",D);
        }
        
    }

    return 0;
}
