#include  <stdio.h>
#include "Arvore.h"

int main () {

    int N1;
    char op;

    do
    {
        do
        {
            printf ("\nInsira a altura(em linhas) da arvore: ");
            fflush(stdin);
            scanf ("%d", &N1);

            if (N1<=0)
            {
                printf("\nERRO: insira um valor maior que 0\n");
            }
            
        } while (N1<=0);

        Arvore(N1);

        printf("\n\nDeseja repetir o programa (S ou N): ");
        fflush(stdin);
        scanf("%c", &op);

    }while(op == 'S' || op == 's');

    return(0);
}