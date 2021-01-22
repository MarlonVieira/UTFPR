#include <stdio.h>

int main (void) {

    float Q, vu, soma1=0, soma2=0, cont=0, M=0;
    int c=0, x=0, cent=0, n100=0, n50=0, n20=0, n10=0, n5=0, n2=0, n1=0;
    char op;

    do
    {
        do
        {
            printf("Informe a quantidade de um produto: ");
            fflush(stdin);
            scanf("%f", &Q);

            if (Q>0)
            {
                c++;

                do
                {
                    printf("Informe o valor unitario: ");
                    fflush(stdin);
                    scanf("%f", &vu);

                    if (vu<0)
                    {
                        printf("ERRO: Valor invalido!\n");
                    }
                    printf("\n");
                } while (vu<0);

                soma1 = soma1 + (vu*Q);
                soma2 = soma2 + Q;
            }
        } while (Q>0);


        printf("VALOR TOTAL DA COMPRA: R$%.2f", soma1);

        M=soma1/soma2;

        printf("\nVALOR MEDIO DA COMPRA: R$%.2f\n", M);


        x=(int)soma1;
        printf("\nO valor total da compra eh %d reais e centavos %.2f \n", x, soma1-x);

        while(x > 100)
        {
            x = x - 100;
            n100++;
        }

        while(x > 50)
        {
            x = x - 50;
            n50++;
        }

        while(x > 20)
        {
            x = x - 20;
            n20++;
        }

        while(x > 10)
        {
            x = x - 10;
            n10++;
        }

        while(x > 5)
        {
            x = x - 5;
            n5++;
        }

        while(x >= 2)
        {
            x = x - 2;
            n2++;
        }

        while(x >= 1)
        {
            x = x - 1;
            n1++;
        }

        if(n100 > 0)
        {
            printf("\n%d nota(s) de 100\n", n100);
        }

        if(n50 > 0)
        {
            printf("%d nota(s) de 50\n", n50);
        }

        if(n20 > 0)
        {
            printf("%d nota(s) de 20\n", n20);
        }

        if(n10 > 0)
        {
            printf("%d nota(s) de 10\n", n10);
        }

        if(n5 > 0)
        {
            printf("%d nota(s) de 5\n", n5);
        }

        if(n2 > 0)
        {
            printf("%d nota(s) de 2\n", n2);
        }

        if(n1 > 0)
        {
            printf("%d moeda(s) de 1\n", n1);
        }

        printf("\n\nDeseja repetir o programa (S ou N): ");
        fflush(stdin);
        scanf("%c", &op);

    }while(op == 'S' || op == 's');

    return (0);
}