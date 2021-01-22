#include <stdio.h>
#include "Triangulo.h"

int main() {

    int N1;
    char op, p;

    do
    {
        do
        {
            printf ("\nInsira um numero: ");
            fflush(stdin);
            scanf ("%d", &N1);

            if (N1<=0)
            {
                printf("ERRO: insira um valor maior que 0");
            }

        } while (N1<=0); 

        do
        {
            printf ("\nVazado V/v ou Preenchido P/p? ");
            fflush(stdin);
            scanf ("%c", &p);

            if (p!= 'V' && p!= 'v' && p!= 'P' && p!= 'p')
            {
                printf("ERRO: Caractere invalido");
            }

        } while (p!= 'V' && p!= 'v' && p!= 'P' && p!= 'p'); 


        triangulo(N1, p);

        printf("\n\nDeseja repetir o programa (S ou N): ");
        fflush(stdin);
        scanf("%c", &op);

    }while(op == 'S' || op == 's');

    return(0);
}