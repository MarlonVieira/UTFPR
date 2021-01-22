#include <stdio.h>

int main (void) {

    int i, si=0, sm=0, mt=0;
    float M;

    printf("\tOs pares sao: ");

    for ( i = 100; i <= 200; i++)
    {
        if (i%2==0)
        {
            printf("\n\t%d", i);
        }
        
        if (i%2==1 && i%3!=0)
        {
            si++;
        }

        if (i%2==0 && i%5==0)
        {
            sm=sm+i;
            mt++;
        }
    }
    
    printf("\n\tExistem %d que nao sao divisiveis por 3 e impares", si);

    M=(float)sm/mt;

    printf("\n\tA media dos pares e divisiveis por 5 sao: %.2f", M);

    return(0);
}