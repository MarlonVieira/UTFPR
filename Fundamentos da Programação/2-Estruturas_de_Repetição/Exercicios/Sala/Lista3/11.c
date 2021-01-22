#include<stdio.h>

int main(void) {

    int N, i, C = 0;
 
    printf("Insira um numero inteiro: ");
    scanf("%d", &N);
 
    for (i = 2; i <= N / 2; i++) 
    {
        if (N % i == 0) 
        {
            C++;
            break;
        }
    }
 
    if (C == 0 && N!=1)
    {
        printf("%d eh um numero primo\n", N);
    }
        else
        {
            printf("%d nao eh um numero primo\n", N);
        }

    return 0;
}