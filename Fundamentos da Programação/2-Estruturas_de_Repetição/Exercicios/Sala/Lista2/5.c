#include <stdio.h>

int main (void) {

    int n, maior, j;

    printf("Insira um valor inteiro:");
    scanf("%d", &n);

    maior = n;

    for (j=0; j < 4; j++)
    {
        printf("Insira um valor inteiro:");
        fflush(stdin);
        scanf("%d", &n);

        if (n>maior)
        {
            maior=n;
        }
        
    }
    printf("Maior eh %d", maior);

    return (0);
}   

//o valor imprime o maior dos valores inseridos, e para de rodar quando inserido do numero 2.
