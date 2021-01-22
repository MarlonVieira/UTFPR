#include <stdio.h>

int main (void) {

    float A, B;
    int h=0;

    A=1.50;
    B=1.10;

    do
    {
        A = A + 0.02;
        B = B + 0.03;
        h++;

    } while (B <= A);

    printf("\nAltura final da arvore A eh: %.2f", A);

    printf("\nAltura final da arvore B eh: %.2f", B);

    printf("\nIra demorar %d anos para a arvore B ser maior que a arvore A.", h);

    return (0);
}