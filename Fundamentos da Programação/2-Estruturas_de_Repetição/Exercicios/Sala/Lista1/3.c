#include <stdio.h>
#include <stdlib.h>

int main (void) {

    float N;

    printf("\nApresenta os numeros entre 0 e 4, com intervalo de 0.25 \n");
    for(N = 0; N <= 4;  N=N+0.25)
    {
        if ((N>=0) && (N<=4))
        {
            printf("%.2f\t", N);
        }
        
    }


    return (0);
}