#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "Vetores.h"

int main (void)
{

    char op, vet[100];
    int lin, i, cont[3];

    do
    {
        do
        {
            printf("\nQuantos caracteres por linha deseja mostrar? ");
            fflush(stdin);
            scanf("%d", &lin);

            if (lin<=0)
            {
                printf("\nERRO: insira um numero maior que 0\n");
            }

        }while (lin<=0);

        printf("\n===ALFANUMERICO===\n");
        GerarVetorCharAlfanumerico(vet, 200);
        mostraVetchar(vet, 200, lin);

        for(i = 0; i < 3; i++)
        {
            cont[i]=0;
        }

        for (i = 0; i < 200; i++)
        {
            if (vet[i]>='A' && vet[i]<='Z')
            {
                cont[0]++;
            }

            else if (vet[i]>='a' && vet[i]<='z')
            {
                cont[1]++;
            }

            else if (vet[i]>='0' && vet[i]<='9')
            {
                cont[2]++;
            }
        }

        printf("\n\nCaracteres afabeticos maiusculos: %d", cont[0]);
        printf("\nCaracteres afabeticos minusculos: %d", cont[1]);
        printf("\nCaracteres numericos: %d", cont[2]);

        printf("\n\nDeseja repetir o programa (S ou N): ");
        fflush(stdin);
        scanf("%c", &op);

    }
    while(op == 'S' || op == 's');

    return(0);
}
