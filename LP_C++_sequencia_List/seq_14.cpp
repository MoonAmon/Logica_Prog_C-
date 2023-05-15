 #include <stdio.h>
 #include <stdlib.h>

 int main(int argc, char const *argv[])
 {
    int hour;

    printf("Digite o valor das horas: ");
    scanf("%d",&hour);

    int min=hour*60;

    printf("Ja se passaram %d minutos desde o início do dia.",min);

    return 0;
 }
 