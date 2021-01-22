#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "Vetores.h"

int main (void) {

    int vet[121], i=0, j=0, menor=0, maior=0, soma=0, cont=0, contd=0;
    float M;
    char op;

    do
    {
        M=0;
        soma=0;
        cont=0;
        contd=0;

        gerarVetor(vet, 121, 41, 5);
        printf("\n===VETOR===\n\n");
        VetorA(vet, 121);

        maior = vet[0];
        menor = vet[0];


        for(i=0; i<121; i++)
        {
            if(vet[i] > maior)
            {
                maior = vet[i];
            }
            else if(vet[i] < menor)
            {
                menor = vet[i];
            }

            soma = soma + vet[i];
            cont++;
        }

        printf("\n\nMenor temperatura da corrida: %d\n", menor);

        printf("\n\nMaior temperatura da corrida: %d\n", maior);

        M=(float)soma/cont;

        printf("\nTemperatura media: %.2f\n", M);
       
        for(j=0; j<121; j++)
        {
            if(vet[j] < M)
            {
                contd++;
            }
        }

        printf("\nQuantidade de dias em que a temperatura foi maior que a media: %d\n", contd);
        
    
        printf("\n\nDeseja repetir o programa (S ou N): ");
        fflush(stdin);
        scanf("%c", &op);

    }while(op == 'S' || op == 's');

    return(0);
}
