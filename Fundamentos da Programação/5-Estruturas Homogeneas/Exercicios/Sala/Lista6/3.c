#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define  tam 10

void GerarMatrizInteiro(int linha, int coluna, int matriz[linha][coluna], int limite);
void MostrarMatrizInteiro(int linha, int coluna, int matriz[linha][coluna]);

int main(void)
{
    int mat[tam][tam];
    int i, j;
    char op;

    do
    {
        GerarMatrizInteiro(tam, tam, mat, 1);
        printf("\n====MATRIZ====\n");
        MostrarMatrizInteiro(tam, tam, mat);

        printf("\n====MATRIZ ATUAL====\n");
        for (i = 0; i < tam; i++)
        {
            for (j = 0; j < tam; j++)
            {
                if (i==j)
                {
                    mat[i][j] = 0;

                }
                if (j==(9-i))
                {
                    mat[i][j] = 0;
                }
                printf("%2d   ", mat[i][j]);
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
