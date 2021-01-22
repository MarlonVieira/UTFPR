#include <stdio.h>

int main (void) {

    int N1, i, j;
    char op;

    do
    {
        do
        {
            printf("\nInforme um numero positivo: ");
            fflush(stdin);
            scanf("%d", &N1);

            if (N1<=0)
            {
                printf("\nERRO: Informe um valor maior que 0.\n");
            }
        }while (N1<=0);

        for (i = 1; i <= N1; i++)
        {
             printf("\n");
            for ( j = 1; j <= N1; j++)
            {
                printf("%d\t", j);
            }
           
        }

        printf("\n\nDeseja digitar outro numero (S ou N): ");
        fflush(stdin);
        scanf("%c", &op);

    }while(op == 'S' || op == 's');

    return 0;
}