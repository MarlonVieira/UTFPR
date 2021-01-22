#include  <stdio.h>
#include <stdlib.h>

int main (void) {

    int i=1, n, Ci=0;

    do {

    printf("Quantos numeros impares quer mostrar:");
        scanf("%d", &n);

    if(n <= 0)
        {
            printf("O valor deve ser maior que 0. Informe novamente.\n");
        }

    }while(n <= 0);

    do
    {
        if(i%2 != 0)
        {
            printf("%d\n", i);
            Ci++;
        }
        i=i+2;

     }while (Ci<n);
     

    return (0);
}