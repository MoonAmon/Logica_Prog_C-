#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    int x;
    int y;
} Posicao;


void mover(Posicao *pos, char direcao) {
    switch (direcao) {
    case 1: pos->y++; break;
    case 2: pos->y--; break;
    case 3: pos->x++; break;
    case 4: pos->x--; break;
    }
}


int main(int argc, char const *argv[])
{
    int N, M, P;
    scanf("%d %d %d", &N, &M, &P);

    Posicao pa = {1, 1};
    Posicao pb = {N, M};

    for (int i = 0; i < P; i++)
    {
        int passoPa, passoPb;
        scanf("%d %d", &passoPa, &passoPb);

        mover(&pa, passoPa);
        mover(&pb, passoPb);

        if (pa.x == pb.x && pa.y == pb.y)
        {
            printf("Os professores se encontraram no quadrado (%d, %d) no passo %d. \n", pa.x, pa.y, i+1);
            return 0;
        }

        if (pa.x > N || pa.y > M || pa.x <= 0 || pa.y <= 0)
        {
            printf("PA saiu na posicao (%d, %d) no passo %d", pa.x, pa.y, i+1);
            return 0;
        }
        
        if (pb.x > N || pb.y > M || pb.x <= 0 || pb.y <= 0)
        {
            printf("PB saiu na posicao (%d, %d) no passo %d", pb.x, pb.y, i+1);
            return 0;
        }
        
        
    }


    printf("Os professores não se encontraram.\n");
    return 0;
}


