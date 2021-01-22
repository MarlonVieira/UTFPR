#include <stdio.h>

int main (void) {

    int N=0, i=0, Ci=0;


    do
    {   
        printf("\nInforme quantos numeros pares quer mostrar: ");
        scanf("%d", &N);

        if(N <= 0)
        {
            printf("O valor deve ser maior que 0. Informe novamente.\n");
        }

    }while(N <= 0);
    
    do
    {    
        
        if(i%2 == 0)
        {
            printf("%d\t", i);
            Ci++;
        }
        
        if(Ci % 5 == 0)
        {
            printf("\n");
        }
        i=i+2;
        
    }while (Ci<N);
    
    return(0);
}