#include <stdio.h>

int main (void) {

    int i, sm=0, mt=0;
    float M;

    for (i = 0; i <= 100; i= i+2)
    {
        printf("%d\t", i);
        sm=sm+i;
        mt++;
    }
    
    M=(float)sm/mt;
    printf("\n A media dos pares eh: %.2f", M);

    return(0);
}