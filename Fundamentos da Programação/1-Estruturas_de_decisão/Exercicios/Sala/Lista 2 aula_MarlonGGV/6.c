#include <stdio.h>
#include <stdlib.h>

int main (void) {

    int A, B, C;

        printf("\nInsira o primeiro lado do triangulo: ");
        scanf("%d", &A);

        printf("\nInsira o segundo  lado do triangulo: ");
        scanf("%d", &B);

        printf("\nInsira o terceiro lado do triangulo: ");
        scanf("%d", &C);

    if ((A==0 || B==0 || C==0) || (A+B<C || A+C<B || B+C<A)) 
    {
        printf("\nOs valores nao sao lados de um triangulo");
    }
        else if (A==B && A==C && B==C)
        {
            printf("\nOs valores sao lados de um triangulo equilatero ");
        }
            else if ((A==B && A!=C) || (A==C && A!=B) || (B==C && B!=A) )
            {
                printf("\nOs valores sao lados de um triangulo isosceles ");
            }
                else if (A!=B && A!=C && B!=C)
                {
                    printf("\nOs valores sao lados de um triangulo escaleno ");
                }    




    return(0);
}