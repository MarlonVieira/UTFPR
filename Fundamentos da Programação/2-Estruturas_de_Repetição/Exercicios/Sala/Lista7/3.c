#include <stdio.h>

int main (void) {

    int N1, p=0, i=0, vezes=1;
    char op;

    do
    {
        do
        {
            printf("\nInforme um numero entre 1 e 50: ");
            fflush(stdin);
            scanf("%d", &N1);

            if (N1<=0 || N1 >= 51)
            {
                printf("\nERRO: Informe um valor entre 1 e 50.\n");
            }
        }while (N1<=0 || N1 >= 51);

    vezes=1;
    i=0;
        do 
        {

            p=N1;

            for (i = 1; i<=vezes; i++) 
            {
                p = p * 2;
            }

            if (p<250)
            {
               printf("N * 2 = %d\n", p);
            }
            
            vezes++;
        } while (p < 250);

        printf("\n\nDeseja digitar outro numero (S ou N): ");
        fflush(stdin);
        scanf("%c", &op);

    }while(op == 'S' || op == 's');

    return(0);
}