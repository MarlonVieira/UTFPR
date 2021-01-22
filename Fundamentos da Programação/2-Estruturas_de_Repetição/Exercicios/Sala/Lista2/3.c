#include <stdio.h>
#include <math.h>

int main (void) {

    int N;

    printf("\nDivisiveis por 3: \tO quadrado dos numeros divisiveis por 3: \tDivisiveis por 5 ou por 7: \tA raiz dos divisiveis por 5 ou por 7:\n\n");

    for(N= 0; N <= 100; N++)
    {

        if (N%3==0 && N != 0)
        {
            printf("\t%d \t\t\t\t %d \n", N, N * N);
        }
            

        if (N%5==0 || N%7==0 && N != 0)
        {
            printf("\t\t\t\t\t\t\t\t\t\t   %d \t\t\t\t\t %.2f\n", N, sqrt(N));
        }
        
    }

    return (0);
}   


