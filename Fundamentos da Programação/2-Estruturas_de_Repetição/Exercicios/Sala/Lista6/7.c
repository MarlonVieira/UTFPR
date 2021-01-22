#include <stdio.h>

int main () 

{
    int N, i, j;
    char op;

    do
    {
        do
        {
            printf("\nInforme um numero positivo: ");
            fflush(stdin);
            scanf("%d", &N);

            if (N <= 0)
            {
                printf("\nValor invalido, informe outro valor.\n");
            }

        } while (N <= 0);

        for (i = 1; i <= N; i++)
        {
            for ( j = 1; j <= i; j++)
            {
                printf("%d\t", i);
            }

            printf("\n");
        }

        printf("\n\nDeseja repetir a operacao (S/N): ");
        fflush(stdin);
        scanf("%c", &op);

    } while(op == 'S' || op == 's');

    return (0);

}