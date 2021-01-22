#include <stdio.h>

int main (void) {

    int N=1, maior, menor, primeiro=0;

    while (N!=0)
    {
        printf("\nDigite alguns numeros inteiros, quando inserido 0 o programa para:");
            scanf("%d", &N);

        if (N != 0)
        {
            if (primeiro==0)
            {
                maior = N;

                menor = N;

                primeiro = 1;
            }
                else
                {
                    if (N > maior)
                    {
                        maior = N;
                    }
                        else if (N < menor)
                        {
                            menor = N;
                        }
                }
        }

    }

        printf("\nMaior:%d e Menor:%d\n", maior, menor);


    return (0);
}
