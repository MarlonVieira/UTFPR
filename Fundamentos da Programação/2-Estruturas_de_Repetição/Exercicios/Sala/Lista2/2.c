#include <stdio.h>

int main (void) {

    long long int F, N;

    printf("\nInforme um numero: ");
    scanf("%lld", &N);

    for(F = 1 ; N > 1; N = N - 1)
    {
        F = F * N;    
    }

    printf("\nO fatorial eh: %lld\n", F);
    
    return (0);
}
