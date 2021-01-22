#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "3.h"

int main (void) {

    int vet1[10], vet2[10], j;
    char op;

    do
    {
        GerarVetorSemRepeticao(vet1, 10, 15);
        printf("\n===VETOR A===\n");
        VetorA(vet1, 10);

        GerarVetorSemRepeticao(vet2, 10, 10);
        printf("\n===VETOR B===\n");
        VetorA(vet2, 10);

        printf("\n===UNIAO===\n");

        for (j = 0; j < 10; j++)
        {
            printf("%d\t%d\t", vet1[j], vet2[j]);
        }

        printf("\n\nDeseja repetir o programa (S ou N): ");
        fflush(stdin);
        scanf("%c", &op);

    }while(op == 'S' || op == 's');

    return(0);
}