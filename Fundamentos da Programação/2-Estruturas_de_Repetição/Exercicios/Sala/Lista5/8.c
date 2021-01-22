#include <stdio.h>

int main (void) {

    int N, a=0, i;

    printf("\nInsira um numero: ");
    scanf("%d", &N);

    printf("\nDivisores:\n");
    for (i = 1; i < N; i++)
    {
        if (N % i == 0)
        {
            a = a + i;
            printf("   %d\n", i);
        }
    }

    printf("-------\n");
    printf("   %d\n", a);

    if (a > N)
    {
        printf("\nO numero eh abundante");
    }
        else
        {
            printf("\nO numero nao eh abundante");
        }

    return (0);
}