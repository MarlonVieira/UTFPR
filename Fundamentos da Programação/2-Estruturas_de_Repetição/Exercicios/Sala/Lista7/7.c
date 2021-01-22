#include <stdio.h>

int main (void) {

    int N1, N2, i=0, j=0, k=0, l=0, c, cont=0;
    char op;

    do
    {
        c=0;
        do
        {
            printf("\nInforme um valor inicial: ");
            fflush(stdin);
            scanf("%d", &N1);

            if (N1<=0)
            {
                printf("\nERRO: Informe um valor maior que 0.\n");
            }

            if (N1%2!=0)
            {
                printf("\nERRO: Informe um valor par.\n");
            }
            
        }while (N1<=0 || N1%2!=0);

        do
        {
            printf("\nInforme um valor final: ");
            fflush(stdin);
            scanf("%d", &N2);

            if (N2<=0)
            {
                printf("\nERRO: Informe um valor maior que 0.\n");
            }

            if (N2<=N1)
            {
                printf("\nERRO: Informe um valor maior que o primeiro.\n");
            }

            if (N2%2!=0)
            {
                printf("\nERRO: Informe um valor par.\n");
            }
            
        }while (N2<=0 || N2<=N1 || N2%2!=0);

        printf("\n====VALORES DO INTERVALO EM ORDEM DECRESCENTE====\n");
        for (i = N2; i >= N1; i--)
        {
            printf("%d\t", i);
        }

        printf("\n====VALORES PARES====\n");
        for (j = N1; j <= N2; j=j+2)
        {
            printf("%d\t", j);
        }
        
        printf("\n====VALORES PRIMOS====\n");
        for (k = N1; k <= N2; k++)
        {
        
            cont=0;

            for(l=1; l<=k; l++)
            {
                if(k%l == 0)
                {
                    cont++;
                }
            }
            if(cont == 2)
            {
                printf("%d\t", k);
            }
        }   

        printf("\n\nDeseja digitar outro numero (S ou N): ");
        fflush(stdin);
        scanf("%c", &op);

    }while(op == 'S' || op == 's');

    return 0;
}