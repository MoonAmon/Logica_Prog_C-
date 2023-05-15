#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{

float valor;
float tax;
float temp;

printf("Digite o valor da prestação: ");
scanf("%f",&valor);

printf("Digite a taxa da prestação: ");
scanf("%f",&tax);

printf("Digite o tempo da prestação: ");
scanf("%f",&temp);

float prest = (valor*temp*(tax/100));

printf("Valor da prestação em atraso: %2.f\n",prest);
   
    return 0;
}
