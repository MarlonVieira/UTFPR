#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "Vetores.h"

int main (void) {

    int a[50], i=0, somaV;
    float Media;
    char op;

    do
    {
        somaV=0;
        Media=0;

        gerarVetor(a, 50, 101, 0);
        printf("\n===VETOR===\n\n");
        VetorA(a, 50);
        
        somaV = SomaVetorInteiro(a, 50);

        Media=(float)somaV/50;

        printf("\n\nMedia: %.2f\n", Media);

        printf("\nSoma do vetor: %d", somaV);
    
        printf("\n\nDeseja repetir o programa (S ou N): ");
        fflush(stdin);
        scanf("%c", &op);

    }while(op == 'S' || op == 's');

    return(0);
}
/*
Imprime um vetor de 50 numeros e mostra a media de todos os numeros, e a soma do vetor.
*/