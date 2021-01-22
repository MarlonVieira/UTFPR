#include <stdio.h>

int main(void) {

    int b, e, i, p = 1;

    printf("Informe a base: ");
    scanf("%d",&b);
     
    printf("Informe o expoente: ");
    scanf("%d",&e);

    for (i=1; i<=e; i++) 
    {
        p = p * b;
    }

    printf("\nA potencia eh %d\n", p); 

    return(0);
}
