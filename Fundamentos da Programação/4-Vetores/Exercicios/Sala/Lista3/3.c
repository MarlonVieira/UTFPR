#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "pares.h"

int main (void) {

    int O[20], i, j, aux;
    char op;

    do
    {
        mostraVet(O, 20, 20, 5);
        printf("\n===VETOR ORIGINAL===\n\n");
        Vetor(O, 20);

        for (i = 0; i < 20; i++)
        {
            for (j = i+1; j < 20; j++)
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

        for (i = 0; i < 20; i++)
        {
            printf("%d\t", O[i]);
        }

        printf("\n\n===PARES===\n");

        for(i=0; i < 20; i++)
        {
            if(O[i] % 2 == 0)
            {
                printf("%d => ", O[i]);
                MostrarPares(O[i]);
                printf("Soma = %d\n", SomaPares(O[i]));
            }
        }
        
        printf("\n\nDeseja repetir o programa (S ou N): ");
        fflush(stdin);
        scanf("%c", &op);

    }while(op == 'S' || op == 's');

    return(0);
}