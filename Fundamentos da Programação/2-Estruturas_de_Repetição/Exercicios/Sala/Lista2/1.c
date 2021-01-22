#include <stdio.h>
#include <stdlib.h>

int main (void) {

    int N, V;

    printf("Informe um numero:");
        scanf("%d",&N);

    V = 0;
    while(V <= 10)
    {
        printf("%2d * %2d = %2d\n", N, V, N * V);

        V++;
    }

    return (0);
}