#include <stdio.h>

int main (void) {

    int V, x, y, i=1, P, j=0;
    char op;

    do
    {
    
        do
        {
            printf("\nQuantos valores deseja mostrar: ");
            fflush(stdin);
            scanf("%d", &V);

            if (V<=0)
            {
                printf("\nO valor deve ser maior que 0.\n");
            }

        } while (V<=0);
    
        do
        {
            printf("\nInforme o valor do primeiro divisor (condicao x): ");
            fflush(stdin);
            scanf("%d", &x);

            if (x<=0)
            {
                printf("\nO valor deve ser maior que 0.\n");
            }

        } while (x<=0);

        do
        {
            printf("\nInforme o valor do segundo divisor (condicao y): ");
            fflush(stdin);
            scanf("%d", &y);

            if (y<=0)
            {
                printf("\nO valor deve ser maior que 0.\n");
            }

        } while (y<=0);

        i=1;
        P=0;
        printf("\n");
        do
        {
            if (i%x==0 && i%y==0 )
            {
                printf("%d\t", i);
                P++;                    
            }
            i++;
        } while(P < V);

        printf("\n\nDeseja repetir o programa (S ou N): ");
        fflush(stdin);
        scanf("%c", &op);

    }while(op == 'S' || op == 's');



    return(0);
}