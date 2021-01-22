#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "Vetores.h"

int main (void) {

    int O[10], i, j, aux;
    char op;

    do
    {
        Vetor(O, 10, 10);
        printf("\n===VETOR ORIGINAL===\n\n");
        mostraVet(O, 10);

        for (i = 0; i < 10; i++)
        {
            for (j = i+1; j < 10; j++)
            {
                if (O[i] > O[j])
                {
                    aux = O[i];
                    O[i] = O[j];
                    O[j] = aux;
                }
                
            }
            
        }

        printf("\n===VETOR ORDENADO===\n");

        for (i = 0; i < 10; i++)
        {
            printf("%d\t", O[i]);
        }
        
        printf("\n\nDeseja repetir o programa (S ou N): ");
        fflush(stdin);
        scanf("%c", &op);

    }while(op == 'S' || op == 's');

    return(0);
}