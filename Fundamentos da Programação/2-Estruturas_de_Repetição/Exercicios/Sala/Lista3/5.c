#include <stdio.h>

int main (void) {

    int i, N=0, sm=0;
    float M;

    for(i = 200; i >= 5; i--)

    if(i % 2 != 0 && i % 5 != 0)
    {
        printf("\t%d", i);
    }
        else if(i % 3 == 0 && i % 5 == 0)
        {
            sm = sm + i;
            N++;
        } 

    M = (float) sm/N;
    printf("\nA media dos divisiveis por 3 e 5 eh: %.2f", M);

    return (0);
}