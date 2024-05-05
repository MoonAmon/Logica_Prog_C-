#include <stdlib.h>
#include <stdio.h>

typedef float bimestre[4];

typedef struct 
{
    char nome[50];
    char turma;
    int sala;
    bimestre notas;
} cad_aluno;

void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF); 
}

int main(int argc, char const *argv[])
{   
    cad_aluno aluno[3];
    int i, j;

    for ( i = 0; i < 3; i++)
    {
        printf("\nAluno %d\n", i+1);

        printf("Digite o nome do aluno: ");
        scanf("%s", &aluno[i].nome);

        printf("Digite a turma do aluno: ");
        scanf(" %c",&aluno[i].turma);

        printf("Digite a sala do aluno: ");
        scanf("%d", &aluno[i].sala);

        limparBuffer();

        for ( j = 0; j < 4; j++)
        {
            printf("Digite a nota do %d bimestre do aluno: \n",j+1);
            scanf("%f", &aluno[i].notas[j]);
            limparBuffer();
        }
        printf("\n");
        
    }
    
    for ( i = 0; i < 3; i++)
    {
        printf("\nAluno %d\n", i+1);

        printf("Nome: %s\n",aluno[i].nome);
        printf("Turma: %c\n",aluno[i].turma);
        printf("Sala: %d\n",aluno[i].sala);

        for (j = 0; j < 4; j++)
        {
            printf("%.2f ",aluno[i].notas[j]);
        }
        printf("\n");
        

    }
    
    
    return 0;
}
