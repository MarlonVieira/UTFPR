#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "Vetores.h"

int main (void) {

    int a[30], b[30], i, j;
    char op;

    do
    {
        gerarVetor(a, 30, 101, 0);
        printf("\n===VETOR A===\n\n");
        VetorA(a, 30);

        j=0;
        for (i = 0; i < 30; i++)
        {
            if (a[i]!=0)
            {
                b[j] = a[i];
                j++;
            }
        }

        printf("\n\n===VETOR B===\n\n");
        VetorA(b, j);

        printf("\n\nDeseja repetir o programa (S ou N): ");
        fflush(stdin);
        scanf("%c", &op);

    }while(op == 'S' || op == 's');

    return(0);
}
/*
Imprime um vetor de 80 numeros e mostra o menor numero e sua posição.
*/
