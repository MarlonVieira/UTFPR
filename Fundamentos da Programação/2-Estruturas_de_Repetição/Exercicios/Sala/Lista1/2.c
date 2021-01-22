#include <stdio.h>
#include <stdlib.h>

int main (void) {

    int N;

    printf("\nApresenta os multiplos de 5, entre 5 e 50\n");
    for(N = 5; N <= 50; N++)
    {
        if (N%5==0)
        {
            printf("%d\t", N);
        }
        
    }
    return (0);
}