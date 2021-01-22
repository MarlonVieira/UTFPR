#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "Vetores.h"

int main (void) {

    int vetb=0, vet[8], i=0;
    char op;

    do
    {
        gerarVetor(vet, 8, 10, 1);
        printf("\n===VETOR A===\n");
        VetorA(vet, 8);

        printf("\n===VETOR B===\n");
        for (i = 0; i < 8; i++)
        {
            vetb=vet[i]*2;
            printf("%2d\t", vetb);
        }
    
        printf("\n\nDeseja repetir o programa (S ou N): ");
        fflush(stdin);
        scanf("%c", &op);

    }while(op == 'S' || op == 's');

    return(0);
}