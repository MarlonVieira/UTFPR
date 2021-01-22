#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "Vetores.h"

int main (void) {

    int vet [80], i, menor, posicao=0;
    char op;

    do
    {
        posicao=0;

        gerarVetor(vet, 80, 101, 0);
        printf("\n===VETOR===\n\n");
        VetorA(vet, 80);

        menor = vet[0];

       for(i=0; i<80; i++)
        {
            if(vet[i] < menor)
            {
                menor = vet[i];
                posicao=i;
            }
        }

        printf("\n\nMenor valor eh %d e esta na posicao %d", menor, posicao);

        printf("\n\nDeseja repetir o programa (S ou N): ");
        fflush(stdin);
        scanf("%c", &op);

    }while(op == 'S' || op == 's');

    return(0);
}
/*
Imprime um vetor de 80 numeros e mostra o menor numero e sua posição.
*/