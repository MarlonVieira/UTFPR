#include <stdio.h>
#include <stdlib.h>

int main (void) {

    int N, i, soma1=0, soma2=0, soma3=0, somat=0;

    for(i=1; i<=30; i++)
    {
        printf("Digite um numero: ");
        scanf("%d",&N);

        if(i <= 10) 
        {
            soma1 = soma1 + N;
        }
        else if(i >= 11 && i <= 20) 
        {
            soma2 = soma2 + N;
        }
        else 
        {
            soma3 = soma3 + N;
        }
    }

    printf("\nA soma dos 10 primeiros numeros eh: %d\n", soma1);

    printf("\nA soma do 11 numero ate o 20 eh: %d\n", soma2);

    printf("\nA soma do 21 numero ate o 30 eh: %d\n", soma3);

    somat= soma3 + soma1 + soma2;
    printf("\nSoma de todos eh: %d", somat);


    
    return (0);
}