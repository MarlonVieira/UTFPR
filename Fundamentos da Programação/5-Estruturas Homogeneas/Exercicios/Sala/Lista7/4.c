#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "3.h"

int main (void) {

    int vet1[10], vet2[10], i, j, c;
    char op;

    do
    {
        GerarVetorSemRepeticao(vet1, 10, 15);
        printf("\n===VETOR A===\n");
        VetorA(vet1, 10);

        GerarVetorSemRepeticao(vet2, 10, 10);
        printf("\n===VETOR B===\n");
        VetorA(vet2, 10);

        printf("\n===INTERSECAO===\n");

        for (i = 0; i < 10; i++)
        {
            for (j = 0; j < 10; j++)
            {
                if (vet1[i]==vet2[j])
                {
                    printf("%d\t", vet1[i]);
                }
            }
        }

        printf("\n\nDeseja repetir o programa (S ou N): ");
        fflush(stdin);
        scanf("%c", &op);

    }while(op == 'S' || op == 's');

    return(0);
}