#include <stdio.h>

int main (void) {

    int N1=1, C;

    while (N1>=0)
    {
        printf("\nInforme um numero: ");
        scanf("%d", &N1);

        if (N1>=0)
        {
            C=0;

            while (N1!=0)
            {
                C++;
                N1=N1/10;
            }
            printf("O numero tem %d digitos", C);
        }
    }

    return(0);
}