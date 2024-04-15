#include <stdio.h>
#include <string.h>


int main(int argc, char const *argv[])
{
    int tamanhoPiramide;
    scanf("%d", &tamanhoPiramide);

    for(int i = 0; i < tamanhoPiramide; i++)
    {
        for (int j = 0; j < tamanhoPiramide - i - 1; j++)
        {
            printf(" ");
        }

        for (int j = 0; j < 2 * i + 1; j++)
        {
            printf("*");
        }
        
        printf("\n");
        
    }
    
    return 0;
}
