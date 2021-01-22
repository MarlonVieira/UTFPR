#include <stdio.h>

int main (void) {
    int x, n1=0, n2=1, n3, i;
    
    printf("\nInforme quantos termos apresentar: ");
    scanf("%d", &x);

    for(i = 0; i < x; i++)
    { 
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
        
    printf("%d\n", n3);
    }

    return (0);
}