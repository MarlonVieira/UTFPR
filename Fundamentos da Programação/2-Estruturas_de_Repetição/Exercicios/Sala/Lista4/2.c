#include <stdio.h>

int main (void) {

    float c;
    int M=0;

    c=1000.00;

    do
    {
        c = c + (c * 0.05);
        M++;

    } while (c <= 1200);

    printf("\n\nO valor final eh: %.2f", c);

    printf("\nSerao necessarios %d meses para o capital ultrapasse R$ 1200.00", M);

    return (0);
}