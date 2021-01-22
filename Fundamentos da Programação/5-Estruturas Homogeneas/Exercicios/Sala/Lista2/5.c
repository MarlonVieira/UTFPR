#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "Vetores.h"

int main (void) {

    int a, b, TMaior, TMenor, i;
    char op;

    do
    {
        do
        {
            printf("Informe o tamanho do vetor A: ");
            fflush(stdin);
            scanf("%d", &a);

            if (a<=0)
            {
                printf("\nERRO: insira um numero maior que 0\n");
            }
            
        } while (a<=0);

        do
        {
            printf("Informe o tamanho do vetor B: ");
            fflush(stdin);
            scanf("%d", &b);

            if (b<=0)
            {
                printf("\nERRO: insira um numero maior que 0\n");
            }
            
        } while (b<=0);

        int vetB[b], vetA[a];
        
        gerarVetor(vetA, a, 20, 1);
        printf("\n===VETOR A===\n");
        VetorA(vetA, a);

        gerarVetor(vetB, b, 15, 1);
        printf("\n===VETOR B===\n");
        VetorA(vetB, b);

        if (a>=b)
        {
            TMaior=a;
            TMenor=b;
        }
            else
            {
                TMaior=b;
                TMenor=a;
            }
        
        int C[TMaior];

        for (i = 0; i < TMenor; i++)
        {
            if (vetA[i] > vetB[i])
            {
                C[i] = 1;
            }
                else if (vetA[i] == vetB[i])
                {
                    C[i] = 0;
                }
                    else
                    {
                        C[i] = -1;
                    }
        }
        
        if (TMaior == a)
        {
            for (i = TMenor; i < TMaior; i++)
            {
                C[i] = 1;
            }
        }
            else
            {
                for (i = TMenor; i < TMaior; i++)
                {
                    C[i] = -1;
                }
            }
        
        printf("\n===VETOR C===\n");
        VetorA(C, TMaior);
    
        printf("\n\nDeseja repetir o programa (S ou N): ");
        fflush(stdin);
        scanf("%c", &op);

    }while(op == 'S' || op == 's');

    return(0);
}