#include <stdio.h>

int main (void) {

    int N, C=0, C1=0, C2=0, C3=0, C4=0, C5=0;


    do
    {
    
        printf("Insira um valor inteiro:");
        scanf("%d", &N);

        if(N >= 0)
        {
            if(N < 10 || N > 100)
            {
                C++;
            }
            if(N % 2 != 0)
            {
                C1++;
            }
            if(N % 10 == 0)
            {
                C2++;
            }
            if(N >= 10 && N <= 100)
            {
                C3++;
            }
            if(N == 30)
            {
                C4++;
            }
            if(N != 10 && N != 20 && N != 30)
            {
                C5++;
            }
        }
    }while(N >= 0);


    printf("\nA quantidade de numeros menores que 10 ou maiores que 100: %d", C);

    printf("\nA quantidade de numeros impares: %d", C1);

    printf("\nA quantidade de numeros divisiveis por 10: %d", C2);

    printf("\nA quantidade de numeros entre 10 e 100: %d", C3);

    printf("\nA quantas vezes eh informado o numero 30: %d", C4);

    printf("\nA quantas vezes eh informado um numero diferente de 10, de 20 e de 30: %d", C5);

    return (0);
}   