#include <stdio.h>

int main (void) {

    int N1, N2, j=0;
    char op;

    do
    {

        do
        {
            printf("\nInforme o valor do limite inferior: ");
            fflush(stdin);
            scanf("%d", &N1);

            if (N1<1)
            {
                printf("\nERRO: Informe o valor maior que 0.\n");
            }
        } while (N1<1);

        do
        {
            printf("\nInforme o valor do limite superior: ");
            fflush(stdin);
            scanf("%d", &N2);

            if (N2<1)
            {
                printf("\nERRO: Informe o valor maior que 0.\n");
            }
            
        } while (N2<1);

        printf("\n===VALORES PARES E DIVISIVIES POR 5 EM ORDEM DECRESCENTE\n");
        if (N2<N1)
        {
            for (j = N1; j >= N2; j--)
            {
                if (j%2==0 && j%5==0)
                {
                    printf("%d\t", j);               
                }
            }
        }


        for (j = N2; j >= N1; j--)
        {
            if (j%2==0 && j%5==0)
            {
                printf("%d\t", j);               
            }
        }
    
        printf("\n\nDeseja digitar outro numero (S ou N): ");
        fflush(stdin);
        scanf("%c", &op);

    }while(op == 'S' || op == 's');

    return(0);
}