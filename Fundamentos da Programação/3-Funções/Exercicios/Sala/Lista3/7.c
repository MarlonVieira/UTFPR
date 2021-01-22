#include <stdio.h>
#include "Feliz.h"

int main()
{

    int i;
    char op;

    do
    {
        for (i = 1; i < 501; i++)
        {
            if (Felizes(i)==1)
            {
                printf("\n%d eh Feliz\n", i);
            }
        }
    
        printf("\n\nDeseja repetir o programa (S ou N): ");
        fflush(stdin);
        scanf("%c", &op);

    }while(op == 'S' || op == 's');

    return(0);
}