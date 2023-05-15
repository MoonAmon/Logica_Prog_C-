#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float n1;
    float n2;
    float n3;
    

    printf("digite nota 1:\n");
    scanf("%f",&n1);

    printf("digite nota 2:\n");
    scanf("%f",&n2);

    printf("digite nota 3:\n");
    scanf("%f",&n3);

    float md = (n1+n2+n3)/3;

    printf("media:%.2f\n",md);
    
    return 0;
}
