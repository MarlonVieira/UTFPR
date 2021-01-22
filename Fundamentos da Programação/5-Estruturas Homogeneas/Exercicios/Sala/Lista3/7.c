#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "Vetores.h"

int main (void) {

    int vet[100], i, j, vetb[100];
    char op;

    do
    {
        GerarVetorPositivoNegativo(vet, 100, 50, 50);
        printf("\n===VETOR A===\n\n");
        mostraVet(vet, 100);

        j=0;
        for (i = 0; i < 100; i++)
        {
            if (vet[i]>0)
            {
                vetb[j]=vet[i];
                j++;
            }
        }
        
        printf("\n===VETOR B===\n\n");
        mostraVet(vetb, j);
       
        printf("\n\nDeseja repetir o programa (S ou N): ");
        fflush(stdin);
        scanf("%c", &op);

    }while(op == 'S' || op == 's');

    return(0);
}