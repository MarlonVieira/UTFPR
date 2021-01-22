#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "matrizes.h"

int main(void)
{
    int mat[3][3];
    int i, j, somatt, somadg, somasec;
    char op;

    do
    {
        somatt=0;
        somadg=0;
        somasec=0;

        GerarMatrizInteiro(3, 3, mat, 10);
        printf("\n====MATRIZ====\n");
        MostrarMatrizInteiro(3, 3, mat);

        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                somatt = somatt + mat[i][j];
                if (i==j)
                {
                    somadg = somadg + mat[i][j];
                }
                if (j==(2-i))
                {
                    somasec = somasec + mat[i][j];
                }
            }
        }
        
        printf("\nA soma de todos os elementos eh: %d", somatt);
        printf("\nA soma dos elementos na diagonal principal eh: %d", somadg);
        printf("\nA soma dos elementos na diagonal secundaria eh: %d", somasec);

        printf("\n\nDeseja repetir o programa (S ou N): ");
        fflush(stdin);
        scanf("%c", &op);

    }while(op == 'S' || op == 's');

    return(0);
}
