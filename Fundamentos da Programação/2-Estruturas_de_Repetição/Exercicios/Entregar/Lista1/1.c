#include <stdio.h>
#include <stdlib.h>

int main (void) {

    int N, CT=0, soma=0;
    float M;

    printf("\nMostrando numeros pares entre 20 e 100:\n");
    for (N= 20; N <= 100; N++)
    {
        
        if (N % 2 == 0)
        {
            printf("\nOs pares sao:%d\t", N);
        }
        if (N % 5 == 0)
        {
            CT++;
            soma=soma+N;
        }
    }
        M = (float)soma / CT;
    printf("A media dos numeros eh: %.2f\n", M);
                
    

    return (0);
}