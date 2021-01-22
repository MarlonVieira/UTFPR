#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define  tam 5

void GerarMatrizInteiro(int linha, int coluna, int matriz[linha][coluna], int limite);
void MostrarMatrizInteiro(int linha, int coluna, int matriz[linha][coluna]);

int main(void)
{
    int mat[tam][tam], somalin[tam], somacol[tam];
    int i, j;
    char op;

    do
    {
        for (i = 0; i < tam; i++)
        {
            somalin[i] = 0;
            somacol[i] = 0;
        }
        
        GerarMatrizInteiro(tam, tam, mat, 10);
        printf("\n====MATRIZ====\n");
        MostrarMatrizInteiro(tam, tam, mat);


        for (j = 0; j < 5; j++)
        {
            somalin[0] = somalin[0] + mat[0][j];
            somalin[1] = somalin[1] + mat[1][j];
            somalin[2] = somalin[2] + mat[2][j];
            somalin[3] = somalin[3] + mat[3][j];
            somalin[4] = somalin[4] + mat[4][j];
        }

        for (i = 0; i < 5; i++)
        {
            somacol[0] = somacol[0] + mat[i][0];
            somacol[1] = somacol[1] + mat[i][1];
            somacol[2] = somacol[2] + mat[i][2];
            somacol[3] = somacol[3] + mat[i][3];
            somacol[4] = somacol[4] + mat[i][4];
        }
        
        printf("\n===SOMA DAS LINHAS===\n");
        printf("%d\t%d\t%d\t%d\t%d", somalin[0], somalin[1], somalin[2], somalin[3], somalin[4]);

        printf("\n\n===SOMA DAS COLUNAS===\n");
        printf("%d\t%d\t%d\t%d\t%d", somacol[0], somacol[1], somacol[2], somacol[3], somacol[4]);

        printf("\n\nDeseja repetir o programa (S ou N): ");
        fflush(stdin);
        scanf("%c", &op);

    }while(op == 'S' || op == 's');

    return(0);
}

void GerarMatrizInteiro(int linha, int coluna, int matriz[linha][coluna], int limite)
{
    int i, j;

    srand(time(NULL));

    for(i=0; i<linha; i++)
    {
        for(j=0; j<coluna; j++)
        {
            matriz[i][j] = rand() % limite + 1;
        }
    }
}

void MostrarMatrizInteiro(int linha, int coluna, int matriz[linha][coluna])
{
    int i, j;

    for(i=0; i<linha; i++)
    {
        for(j=0; j<coluna; j++)
        {
            printf("%2d   ", matriz[i][j]);
        }
        printf("\n");
    }
}