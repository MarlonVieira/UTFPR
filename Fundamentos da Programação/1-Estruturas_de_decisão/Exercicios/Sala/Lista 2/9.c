#include <stdio.h>
#include <stdlib.h>


int main (void) {

    int Numeros, mil, cent, dez, uni;

        printf("\nInsira um numero de 4 digitos: ");
            scanf("%d", &Numeros);

    mil= Numeros/1000;
    cent= (Numeros%1000)/100;
    dez=(Numeros%100)/10;
    uni=(Numeros%10);

    if((uni==mil) && (cent==dez))
    {
        printf("\nOs numeros: %d sao palindromos\n", Numeros);
    }
        else
        {
            printf("\nOs numeros: %d nao sao palindromos\n", Numeros);
        }
        
        
    return (0);

}