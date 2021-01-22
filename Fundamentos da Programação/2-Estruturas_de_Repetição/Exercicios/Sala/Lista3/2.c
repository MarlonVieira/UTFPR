#include <stdio.h>

int main (void) {

    float N, P;

    printf("\nInforme o numero de pessoas: ");
        scanf("%f", &P);

    printf("\nValor do ingresso:\tValor total recebido: ");

    for (N = 15; N <= 20; N = N + 0.50)
    {
        printf("\nR$%.2f\t\t\tR$%.2f", N, N * P);
    } 

    return (0);
}