#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void GerarMatrizInteiro(int linha, int coluna, int matriz[linha][coluna], int limite);
void MostrarMatrizInteiro(int linha, int coluna, int matriz[linha][coluna]);

int main (void) {

    int mat[50][10], i, j, cont=0;
    char op;

    do
    {
        GerarMatrizInteiro(50, 10, mat, 5);
        printf("\n=====RESPOSTAS DOS ALUNOS=====\n");
        for(i = 0; i < 50; i++)
        {
            printf("Aluno %2d ==> ", i+1);
            for(j = 0; j < 10; j++)
            {
                printf("%2d  ", mat[i][j]);
            }
            printf("\n");
        }

        int Gaba[10];

        printf("\n=====GABARITO=====\n");
        
        srand(time(NULL));
        for(i = 0; i < 10; i++)
        {
            Gaba[i] = rand () % 5+1;
        }

        for(i = 0; i < 10; i++)
        {
            printf("%2d ", Gaba[i]);
        }
        printf("\n\n=====PONTUACAO DOS ALUNOS=====\n");
        for(i = 0; i < 50; i++)
        {
            cont=0;
            for(j = 0; j < 10; j++)
            {
                if(mat[i][j] == Gaba[j])
                {
                    cont++;
                }
            }
            if (cont<=1)
            {
                printf("\nAluno %2d ==> %d ponto", i+1, cont);
            }
            else
            {
                printf("\nAluno %2d ==> %d pontos", i+1, cont);
            }
            
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