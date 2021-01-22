#include <stdio.h>

int main (void) {

    int i;

    printf("Apresentando os numeros entre 1 e 1000 que sao divisiveis por 11 e impares: \n");

    for (i = 1; i <=1000; i++)
    {
        if (i % 11 == 0 && i % 2 == 1)
        {
            printf("%d\t", i);
        }
    }

    return (0);
}