#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int num1,num2;

    printf("Digite o numero a: ");
    scanf("%d",&num1);
    printf("Digite o numero b: ");
    scanf("%d",&num2);

    if (num1>num2)
    {
        int x=num1-num2;
        printf("A diferença do maior para o menor: %d\n",x);
    } else {
        
        int x=num2-num1;
        printf("A diferença do maior para o menor: %d\n",x);

    }
    


    return 0;
}
