#include <stdio.h>

int main (void) {

    int i, sm=0, md=0;
    float M;

    i=100;

    while (i>=0)
    {
        sm=sm+i;
        printf("\t%d", i);
        i--;
        md++;
    }
    
    M=(float)sm/md;

    printf("\nA media de 100 a 0 eh: %.2f", M);


    return(0);
}