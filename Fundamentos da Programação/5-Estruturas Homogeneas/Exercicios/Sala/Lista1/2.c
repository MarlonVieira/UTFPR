#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "Vetores.h"

int main (void) {

    int n, i=0, V, menor=0, somapar=0, contpar=0, cont=0, indice=0;
    float M;
    char op;

    do
    {
        menor=0;
        somapar=0;
        cont=0;
        contpar=0;
        
        do
        {
            printf("Insira o tamanho do vetor: ");
            fflush(stdin);
            scanf("%d", &V);

            if (V<=0)
            {
                printf("\nERRO: insira um valor maior que 0\n");
            }

        } while (V<=0);

        int vet[V];

        do
        {
            printf("Insira o valor de n: ");
            fflush(stdin);
            scanf("%d", &n);

            if (n<=0)
            {
                printf("\nERRO: insira um valor maior que 0\n");
            }

        } while (n<=0);
        
        Vetor(vet, V, n);
        printf("\n===VETOR GERADO===\n");
        mostraVet(vet, V);

        menor = vet[0];

        for(i=0; i < V; i++)
        {
            if(vet[i] < menor)
            {
                menor = vet[i];
                indice = i;
            }
            if(vet[i]%2==0)
            {
                somapar = somapar + vet[i];
                contpar++;
            }
        }

        printf("\n\nMenor valor eh %d e esta no indice %d\n", menor, indice);

        if (contpar>0)
        {
            M=(float)somapar/contpar;
            printf("\nMedia dos pares: %.2f", M);
        }

        printf("\n\nDeseja repetir o programa (S ou N): ");
        fflush(stdin);
        scanf("%c", &op);

    }while(op == 'S' || op == 's');

    return(0);
}