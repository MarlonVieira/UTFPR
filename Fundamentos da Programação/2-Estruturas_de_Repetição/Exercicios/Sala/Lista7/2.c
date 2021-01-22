#include <stdio.h>

int main (void) {

    int N1, i , j, soma=0;
    char op;

    do
    {
        do
        {
            printf("\nInforme um numero entre 2 e 12: ");
            fflush(stdin);
            scanf("%d", &N1);

            if (N1<2 || N1>12)
            {
                printf("\nERRO: Informe um valor entre 2 e 12.\n");
            }
        }while (N1<2 || N1>12);

        for (i = 1; i <= 6; i++)
        {
            for (j = 1; j <=6; j++)
            {
                if (i+j==N1)
                {
                    printf("%d + %d = %d\n", i, j, i + j);
                    soma++;
                }
            }
        }
        printf("\nNumero de posssibilidade: %d", soma);

        printf("\n\nDeseja digitar outro numero (S ou N): ");
        fflush(stdin);
        scanf("%c", &op);

    }while(op == 'S' || op == 's');

    return(0);
}