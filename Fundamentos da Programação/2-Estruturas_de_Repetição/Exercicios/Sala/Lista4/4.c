#include <stdio.h>

int main (void) {

    int N, Ci=0, Cn=0, sm=0;
    float M;

    do
    {
        printf("\nInforme um numero: ");
        scanf("%d", &N);
    
    if (N > 0 && N%2==1)
    {
        Ci++;
    }

    if (N < 0)
    {
        sm = sm - N;
        Cn++;
    }

    }while(N!=0);

    M=(float)sm / Cn;

    printf("\nA media dos negativos eh: -%.2f", M);

    printf("\nForam informados %d numeros positivos e impares", Ci);

    return (0);
}
