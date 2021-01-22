#include <stdio.h>
#include <math.h>

int main (void) {

    int V, x, y, i=1, P, j=0;
    char op;

    do
    {
    
        do
        {
            printf("\nInforme um valor de n: ");
            fflush(stdin);
            scanf("%d", &V);

            if (V<=0)
            {
                printf("\nO valor deve ser maior que 0.\n");
            }

        } while (V<=0);

        P=0;
        i=0;
        printf("\n");
        do
        {
            if (sqrt(i))
            {
                printf("%d => raiz de %d\n", j=i*i, i);
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