#include <stdio.h>

int main (void) {

    int N, C=0;

    do
    {
        printf("\nInforme um numero: ");
        scanf("%d", &N);
    
    if (N%5==0 && N%2==0 && N!=0)
    {
        C++;
    }

    }while(N > 0);

    printf("\n%d numeros sao divisiveis por 5 e pares", C);

    return (0);
}
