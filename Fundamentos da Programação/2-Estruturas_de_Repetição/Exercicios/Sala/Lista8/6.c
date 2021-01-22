#include <stdio.h>

int main (void) {

    int n, soma, i=0, x, j;
    char op;

    do
    {
        do
        {
            printf("Informe um numero entre 10 e 20: ");
            fflush(stdin);
            scanf("%d", &n);

            if (n<10 || n>20)
            {
                printf("\nERRO: Numero invalido\n");
            }

        } while (n<10 || n>20);

        x=n+6;
        j=n;

        do
        {
            soma=0;
            printf("\n%d ==> ", j);
            for (i = 0; i <= j; i++)
            {
                if (i%2==0)
                {
                    soma=soma+i;
                    printf("%d  ", i);
                }
            }

            printf("<== Soma = %d", soma);

            j++;

        } while (j<=x);

        printf("\n\nDeseja repetir o programa (S ou N): ");
        fflush(stdin);
        scanf("%c", &op);

    }while(op == 'S' || op == 's');

    return(0);
}
