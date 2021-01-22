#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "Vetores.h"

int main (void) {

    float vet[10], vetb[50];
    int i;
    char op;

    do
    {
        GerarVetorFloat0a1(vet, 10);
        printf("\n===VETOR 1===\n");
        MostrarVetorFloat(vet, 10);
        printf("\n\nSoma: %.2f", SomarVetorFloat(vet, 10));

        GerarVetorFloat0a100(vetb, 50);
        printf("\n\n===VETOR 2===\n");
        MostrarVetorFloat(vetb, 50);

        printf("\n\n===VETOR 3===\n");
        for (i = 0; i < 50; i++)
        {
            if (vetb[i] < 50)
            {
                printf("%.1f\t", vetb[i]);
            }
        }
       
        printf("\n\n===VETOR 4===\n");
        for (i = 0; i < 50; i++)
        {
            if (vetb[i] > 50)
            {
                printf("%.1f\t", vetb[i]);
            }
        }
        
        printf("\n\nDeseja repetir o programa (S ou N): ");
        fflush(stdin);
        scanf("%c", &op);

    }while(op == 'S' || op == 's');

    return(0);
}