#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "Vetores.h"

int main (void) {

    int vet[10], i=0, somamenor=0, somamaior=0, contI=0, contM=0;
    float M=0;
    char op;

    do
    {
        somamaior=0;
        somamenor=0;
        contM=0;
        contI=0;
        M=0;

        gerarVetor(vet, 10, 200, 1);
        printf("\n===VETOR===\n");
        VetorA(vet, 10);

        for (i = 0; i < 10; i++)
        {
            if (vet[i]<100)
            {
                somamenor = somamenor + vet[i];
            }

            if (vet[i]==100)
            {
                contI++;
            }

            if (vet[i]>100)
            {
                somamaior = somamaior + vet[i];
                contM++;
            }
        }

        printf("\n\nSoma dos valores menores que 100: %d\n", somamenor);

        printf("\nQuantidade de valores igual a 100: %d\n", contI);

        M=(float)somamaior/contM;

        printf("\nMedia dos valores maiores do que 100: %.2f", M);
        
    
        printf("\n\nDeseja repetir o programa (S ou N): ");
        fflush(stdin);
        scanf("%c", &op);

    }while(op == 'S' || op == 's');

    return(0);
}