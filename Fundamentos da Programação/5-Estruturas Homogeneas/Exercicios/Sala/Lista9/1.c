#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void gerarMatrizInteiroDe0aLimite(int linha, int coluna, int matriz[linha][coluna], int limite);
void mostrarMatrizInteiro(int linha, int coluna, int matriz[linha][coluna]);

int main(void)
{
    int matriz[5][5], i, j, cont, valor;
    char op;

    do
    {
        cont=0;
        valor=0;
        gerarMatrizInteiroDe0aLimite(5, 5, matriz, 50);
        printf("\n=== MATRIZ ===\n");
        mostrarMatrizInteiro(5, 5, matriz);

        printf("\nInsira um valor: ");
        fflush(stdin);
        scanf("%d", &valor);

        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 5; j++)
            {
                if(valor==matriz[i][j])
                {
                    cont++;
                }
            }  
        }
        
        if(cont>=1)
        {
            printf("\n%d existe na matriz", valor);
        }
        else
        {
            printf("\n%d nao existe na matriz", valor);
        }

        printf("\n\nDeseja repetir o programa (S ou N): ");
        fflush(stdin);
        scanf("%c", &op);

    }while(op == 'S' || op == 's');

    return(0);
}

void gerarMatrizInteiroDe0aLimite(int linha, int coluna, int matriz[linha][coluna], int limite)
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

void mostrarMatrizInteiro(int linha, int coluna, int matriz[linha][coluna])
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
