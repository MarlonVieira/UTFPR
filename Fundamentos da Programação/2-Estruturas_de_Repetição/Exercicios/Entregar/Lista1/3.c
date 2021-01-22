 #include <stdio.h>
#include <stdlib.h>

int main (void) {

    float N;

    printf("\nMostrar os numeros entre 10 e 0 (ordem decrescente) com intervalo de 0.5:\n");
    for(N = 10; N >= 0;  N=N-0.5)
    {
        if ((N<=10) && (N>=0))
        {
            printf("%.2f\t", N);
        }
        
    }


    return (0);
}