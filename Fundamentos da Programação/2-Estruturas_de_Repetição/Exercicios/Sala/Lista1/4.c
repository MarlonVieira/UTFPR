#include <stdio.h>

int main (void) {

    int N;

    printf("Apresentando numeros de 10 a 0\n");
    for(N= 10; N >= 0; N--)
    {
        printf("%d\t", N);
    }

    return (0);
}