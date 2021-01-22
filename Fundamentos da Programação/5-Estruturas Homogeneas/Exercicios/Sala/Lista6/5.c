#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define lin 10
#define col 2

void GerarMatrizInteiro(int linha, int coluna, int matriz[linha][coluna], int limite);
void MostrarMatrizInteiro(int linha, int coluna, int matriz[linha][coluna]);
int Potencia (int base, int exp);

int main(void)
{
    int mat[lin][col], vetor[10];
    int i;
    char op;

    do
    {
        GerarMatrizInteiro(lin, col, mat, 6);
        printf("\n====MATRIZ====\n");
        MostrarMatrizInteiro(lin, col, mat);

        printf("\n===CALCULO DA POTENCIA===\n");
        printf("\nBASE\tEXPOENTE\tRESULTADO\n");
        for(i=0; i<lin; i++)
        {
            printf("%d\t%d\t\t", mat[i][0], mat[i][1]);
            vetor[i] = Potencia(mat[i][0], mat[i][1]);
            printf("%d\n", vetor[i]);
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

int Potencia (int base, int exp)
{
    int i, result=1;

    for (i = 1; i < exp; i++)
    {
        result = result * base;
    }
    

    return(result);
}