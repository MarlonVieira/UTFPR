#include <stdio.h>

int main (void) {

    int N3, m=0, i, j, k, cont=0, APLI=0;
    float N1, N2;
    char op;

    do
    {
        do
        {
            printf("\nInforme um valor de aplicacao: ");
            fflush(stdin);
            scanf("%f", &N1);

            if (N1<=0)
            {
                printf("\nERRO: Informe um valor maior que 0.\n");
            }
        }while (N1<=0);

        do
        {
            printf("\nInforme o percentual de rendimento mensal: ");
            fflush(stdin);
            scanf("%f", &N2);

            if (N2<=0 || N2>1)
            {
                printf("\nERRO: Informe um valor entre 1 e 0.\n");
            }
        }while (N2<=0 || N2>1);

        do
        {
            printf("\nInforme o periodo(em meses): ");
            fflush(stdin);
            scanf("%d", &N3);

            if (N3<0);
            {
                printf("\nERRO: Informe um valor maior que 0.\n");
            }
        }while (N3<0);

        printf("MES\t\t\t%DE RENDIMENTO\t\t\tVALOR APLICACAO");

        for (i = 1; i <= N3; i++)
        {
            if (i%12==0)
            {
                N2=N2+0.25;
            }
            N1=N1+(N1*N2);
            printf("\n%2d\t\t\t %.2f\t\t\t\tR$%.2f\n", i, N2, N1);
        }

        printf("\n\nDeseja digitar outro numero (S ou N): ");
        fflush(stdin);
        scanf("%c", &op);

    }while(op == 'S' || op == 's');

    return(0);
}