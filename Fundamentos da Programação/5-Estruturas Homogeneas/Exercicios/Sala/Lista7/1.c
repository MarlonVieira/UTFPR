#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define lin 1
#define col 5

void GerarMatrizInteiro(int linha, int coluna, int matriz[linha][coluna], int limite);
void MostrarMatrizInteiro(int linha, int coluna, int matriz[linha][coluna]);

int main(void)
{
    int mat[lin][col];
    int i, j, k;
    char op;

    do
    {
        GerarMatrizInteiro(lin, col, mat, 9);
        printf("\n====MATRIZ====\n");
        MostrarMatrizInteiro(lin, col, mat);

        for(i=0; i<lin; i++)
        {
            for (j = 0; j < col; j++)
            {     
                printf("\n\n===TABUADA DE %d===\n", mat[i][j]);
        
                for (k = 0; k <= 10; k++)
                {
                    printf("%d * %d = %d\n", mat[i][j], k ,mat[i][j]*k);
                }
            }
            printf("\n");
        }

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
