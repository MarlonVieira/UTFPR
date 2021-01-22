#include <stdio.h>
#include <stdlib.h>

int main (void) {

    int N;

    printf("\nMostrando os numeros divisiveis por 3 entre 200 e 100:\n");
    for (N= 200; N >= 100; N--)
    {
        if (N % 3 == 0)
            printf("%d\t", N);
    }





    return (0);
}