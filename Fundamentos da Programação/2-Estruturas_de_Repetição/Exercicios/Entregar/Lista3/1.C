#include <stdio.h>

int main (void) {

    int N1, d, R, cont=0, nn=0;
    char op;

    do
    {
        do
        {
            printf("\nInforme um numero: ");
            fflush(stdin);
            scanf("%d", &N1);

            if (N1<0)
            {
                printf("\nERRO: Informe um valor maior ou igual a 0.\n");
            }
        }while (N1<0);

        do
        {
            printf("\nInforme um digito(0 a 9): ");
            fflush(stdin);
            scanf("%d", &d);

            if (d<0)
            {
                printf("\nERRO: Informe um valor maior ou igual a 0.\n");
            }
        }while (d<0);

        while(N1 != 0)
        {
            R = N1 % 10;
            if(R == d)
            {
                cont = cont + 1; 
            }
            N1 = N1 / 10;
        }

        printf("\nO numero %d tem digitos iguais a %d.\n", cont, d);

        printf("\n\nDeseja digitar outro numero (S ou N): ");
        fflush(stdin);
        scanf("%c", &op);

    }while(op == 'S' || op == 's');

    return(0);
}