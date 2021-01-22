#include <stdio.h>

int main (void) {

    int n, div, i=0, x, j=0, k=0, soma=0, maior=0;
    char op;

    do
    {
        do
        {
            printf("Informe um numero entre 2 e 100: ");
            fflush(stdin);
            scanf("%d", &n);

            if (n<2 || n>100)
            {
                printf("\nERRO: Numero invalido\n");
            }

        } while (n<2 || n>100);

        x=n+10;
        j=n;

        do
        {
            div=0;

            printf("\n%d ==> ", j);

            for (i = 1; i <= j; i++)
            {
                if (j%i==0)
                {
                    div++;
                    printf("%d  ", i);

                    soma = soma + div;

                    if (div > maior)
                    {
                        maior = div;
                    }
                }
            }
            
            printf("<== %d divisores", div);

            j++;

        } while (j<=x);

        
        
        printf("\n\n A maior quantidade de divisores eh: %d", maior);


        printf("\n\nDeseja repetir o programa (S ou N): ");
        fflush(stdin);
        scanf("%c", &op);

    }while(op == 'S' || op == 's');

    return(0);
}
