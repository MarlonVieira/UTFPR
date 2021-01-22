#include <stdio.h>
#include "Diamante.h"

int main()
{

    int N1;
    char op;

    do
    {
        do
        {
            printf ("\nInsira um numero impar: ");
            fflush(stdin);
            scanf ("%d", &N1);

            if (N1<=0)
            {
                printf("\nERRO: insira um valor maior que 0\n");
            }

            if (N1%2==0)
            {
                printf("\nERRO: insira um valor impar\n");
            }
            
        } while (N1<=0 || N1%2==0);


        Diamante(N1);
    
        printf("\n\nDeseja repetir o programa (S ou N): ");
        fflush(stdin);
        scanf("%c", &op);

    }while(op == 'S' || op == 's');

    return(0);
}

