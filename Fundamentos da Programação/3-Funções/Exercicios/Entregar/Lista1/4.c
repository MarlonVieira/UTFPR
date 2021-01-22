#include <stdio.h>
#include "Tabuada.h"

int main () {

    int x, y, N1, i=0;
    char op;

    do
    {
        do
        {
            printf("Informe um valor: ");
            fflush(stdin);
            scanf("%d", &x);

            if (x<=0)
            {
                printf("\nERRO: insira um numero maior que 0.");
            }
            
        } while (x<=0);

        do
        {
            printf("Informe um outro valor: ");
            fflush(stdin);
            scanf("%d", &y);

            if (y<=0)
            {
                printf("\nERRO: insira um numero maior que 0.");
            }
            
        } while (y<=0);

        printf("%d * %d = %d", x, y, Tabuada(x , y));

        do
        {
            printf("\n\nInforme um valor: ");
            fflush(stdin);
            scanf("%d", &N1);

            if (N1<=0)
            {
                printf("\nERRO: insira um numero maior que 0.");
            }
            
        } while (N1<=0);

        for (i = 0; i <= 10; i++)
        {
            printf("\n%d * %d = %d", N1, i, Tabuada(N1, i));
        }
        



        printf("\n\nDeseja repetir o programa? (S/N) ");
        fflush (stdin);
        scanf("%c", &op);
    } while (op == 'S' || op == 's');

    return(0);
} 
