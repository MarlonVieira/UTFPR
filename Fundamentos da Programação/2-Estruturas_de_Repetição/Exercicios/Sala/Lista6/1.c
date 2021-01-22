#include <stdio.h>

int main (void) {

    int N1, N2, c=0, i, soma=0;
    float M;
    char op;

    do
    {
        do
        {
            printf("\nInforme um valor: ");
            scanf("%d", &N1);

        } while (N1<=0);

        for (i = 0; i <=N1*2; i++)
        {
            if (i%2==1)
            {
                printf("%d\t", i);
                c++;
                soma=soma+i;
            }
        }

        M=(float)soma/c;

        if (M>0)
        {
            printf("\n A media dos numeros impares eh: %.2f", M);
        }

        printf("\n\nDeseja digitar outro numero (S ou N): ");
        fflush(stdin);
        scanf("%c", &op);

    }while(op == 'S' || op == 's');






    return(0);
}