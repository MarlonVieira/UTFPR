#include <stdio.h>


int main (void) {

    int N, sm=0, md=0;
    float M;

    printf("\nDivisiveis por 4: \tMultiplos de 10: ");

    for(N= 500; N >= 0; N--)
    {

        if (N%4==0 && N != 0)
        {
            printf("\n\t%d \n", N);
        }
        
        if (N%10==0 && N != 0)
        {
            sm=sm+N;
            md++;
            printf(" \t\t\t\t %d \n", N);
        }

    }
        
    M= (float) sm / md;
    printf("\n\t\tMedia dos multiplos: %.2f", M);  

    
        
    return (0);
}   
