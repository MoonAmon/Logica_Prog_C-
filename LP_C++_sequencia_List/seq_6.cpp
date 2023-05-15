#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int div1;
    int divs1;

    printf("digite o dividendo:");
    scanf("%d",&div1);

    printf("digite o divisor:");
    scanf("%d",&divs1);

    float div2 = div1;
    float divs2 = divs1;
    double quo = div2/divs2;
    double rest = div1%divs1;

    printf("Dividendo: %d\n",div1);
    printf("Divisor: %d\n",divs1);
    printf("Quociente: %lf\n",quo);
    printf("Resto: %2.lf\n",rest);

    return 0;
}
