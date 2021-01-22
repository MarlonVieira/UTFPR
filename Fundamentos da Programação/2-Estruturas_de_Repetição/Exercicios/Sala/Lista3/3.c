#include <stdio.h>

int main (void) {

    int i, N;
    float S = 0;

    printf("\nInforme um valor: ");
        scanf("%d", &N);

    for(i=1; i<=N; i++)
    {
        S = S + (1/(float)i);
    }
    printf("\nO resultado da soma eh: %.2f", S);

    return (0);
}