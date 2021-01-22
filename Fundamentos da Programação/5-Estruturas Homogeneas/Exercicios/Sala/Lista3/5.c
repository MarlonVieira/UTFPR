#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "Vetores.h"

int main (void) {

    int lin;
    char op, vetMin[100], vetMai[200];

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
            
        } while (lin<=0);
        
        printf("\n===VETOR DE MINUSCULAS===\n");
        GerarVetorCharMinuscula(vetMin, 100);
        mostraVetchar(vetMin, 100, lin);

        printf("\n\n===VETOR DE MAIUSCULAS===\n");
        GerarVetorCharMaiuscula(vetMai, 200);
        mostraVetchar(vetMai, 200, lin);
       
        printf("\n\nDeseja repetir o programa (S ou N): ");
        fflush(stdin);
        scanf("%c", &op);

    }while(op == 'S' || op == 's');

    return(0);
}