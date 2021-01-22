#include <stdio.h>
#include <stdlib.h>

int main (void) {

    int N, p=0, mn=0, sm=0, np=0;
    float M;

    do
    {
        printf("Insira um numero: ");
        fflush(stdin);
        scanf("%d", &N);

        if (N > 0 && N != 0)
        {
            p++;
        }
    
        if (N<0 && N != 0 && N%2==0)
        {
            np++;
        }

        if (N % 3 == 0 && N != 0)
        {
            sm=sm+abs(N);
            mn++;
        }



    }while(N != 0);

    printf("\nO total de valores positivos eh: %d", p);

    printf("\nO total de valores negativos e pares eh: %d", np);

    M =(float)sm/mn;

    printf("\nA media dos valores divisiveis por 3 eh: %.2f", M);

    return (0);
}