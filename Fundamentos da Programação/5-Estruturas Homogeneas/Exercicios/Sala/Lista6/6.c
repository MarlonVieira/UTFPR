#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define  tam 3

void GerarMatrizInteiro(int linha, int coluna, int matriz[linha][coluna], int limite);
void MostrarMatrizInteiro(int linha, int coluna, int matriz[linha][coluna]);

int main(void)
{
    int mat[tam][tam];
    int i, j, maior, linha, coluna;
    char op;

    do
    {
        maior=0;
        linha=0;
        coluna=0;
        GerarMatrizInteiro(tam, tam, mat, 100);
        printf("\n====MATRIZ====\n");
        MostrarMatrizInteiro(tam, tam, mat);

        maior = mat[0][0];
        for(i=0; i<3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                if(mat[i][j] > maior)
                {
                    maior = mat[i][j];
                    coluna = j+1;
                    linha = i+1;
                }
            }
        }
        
        printf("\nO maior elemento da matriz eh %d e se encontra na linha %d da coluna %d", maior, linha, coluna);

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
