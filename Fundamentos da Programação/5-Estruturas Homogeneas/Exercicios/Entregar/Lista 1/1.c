#include <stdio.h>
#include <stdlib.h>

int main (void) {

    int i, posicao, cont;
    float pessoas[5], M, maior, soma;
    char op;

    do
    {
        maior=0;
        M=0;
        soma=0;

        do
        {
            for (i = 0; i < 5; i++)
            {
                printf("\nInforme a altura da pessoa %d: ", i+1);
                scanf("%f", &pessoas[i]);
            }
            
            if (pessoas[i] < 0)
            {
                printf("\nERRO: informe uma altura valida.\n");
            }
            
        } while (pessoas[i] < 0);
        

        for(i=0; i<5; i++)
        {
            if(pessoas[i] > maior)
            {
                maior = pessoas[i];
                posicao=i;
            }

            if (pessoas[i] > 1.5)
            {
                soma = soma + pessoas[i];
                cont++;
            }
            
        }

        printf("\n\nMaior altura eh %.2f e esta na posicao %d\n", maior, posicao);

        M=soma/cont;

        printf("\nMedia das alturas maiores que um metro e meior: %.2f\n", M);
        

        printf("\n\nDeseja repetir o programa (S ou N): ");
        fflush(stdin);
        scanf("%c", &op);

    }while(op == 'S' || op == 's');

    return(0);
}