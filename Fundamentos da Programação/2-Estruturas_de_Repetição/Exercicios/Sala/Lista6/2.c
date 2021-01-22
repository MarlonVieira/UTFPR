#include <stdio.h>

int main (void) {

    int N1, i, j, div, P;
    char op;

    do
    {
        do
        {
            printf("\nInforme quantos numeros primos quer mostrar: ");
            scanf("%d", &N1);

            if (N1<=0)
            {
                printf("\nERRO: Informe um valor maior que 0.\n");
            }
        }while (N1<=0);

    P=0;
    i=2;

        do
        {
            div=0;

            for(j=1; j<=i; j++)
            {
                if(i%j == 0)
                {
                    div++;
                }
            }
            if(div == 2)
            {
                printf("%d\t", i);
                P++;
            }
            i++;
        }while(P < N1);

        printf("\n\nDeseja digitar outro numero (S ou N): ");
        fflush(stdin);
        scanf("%c", &op);

    }while(op == 'S' || op == 's');

    return 0;
}