#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "Vetores.h"

int main (void) {

    int i=0, j=0, vet[15];
    char op;

    do
    {
        gerarVetor(vet, 15, 25, 1);
        printf("\n===VETOR GERADO===\n");
        VetorA(vet, 15);

        printf("\n===VETOR DE PARES===\n");
        for(i=0; i < 15; i++)
        {
            if(vet[i]%2==0)
            {
                printf("%d\t", vet[i]);
            }       
        }

        printf("\n===VETOR DE IMPARES===\n");
        for(j=0; j < 15; j++)
        {
            if(vet[j]%2!=0)
            {
                printf("%d\t", vet[j]);
            }
        }



        printf("\n\nDeseja repetir o programa (S ou N): ");
        fflush(stdin);
        scanf("%c", &op);

    }while(op == 'S' || op == 's');

    return(0);
}