#include <stdio.h>
#include "Feliz.h"

int main()
{

    int N1;
    char op;

    do
    {
        do
        {
            printf ("\nInsira um numero: ");
            fflush(stdin);
            scanf ("%d", &N1);

            if (N1<=0)
            {
                printf("\nERRO: insira um valor maior que 0\n");
            }

        } while (N1<=0);

        if (Felizes(N1)==1)
        {
            printf("\n%d eh Feliz\n", N1);
        }

        else
        {
            printf("\n%d nao eh Feliz\n", N1);
        }
        
    
        printf("\n\nDeseja repetir o programa (S ou N): ");
        fflush(stdin);
        scanf("%c", &op);

    }while(op == 'S' || op == 's');

    return(0);
}

