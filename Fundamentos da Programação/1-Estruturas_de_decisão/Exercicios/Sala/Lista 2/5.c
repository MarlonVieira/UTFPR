#include <stdio.h>
#include <stdlib.h>

int main (void) {

    float RA, AL, IR;

        printf("Insira sua renda anual: ");
            scanf("%f", &RA);

    if (RA >= 0)
    {
        if (RA <= 10000)
        {
            AL=0;
        }
            else if (RA>10000 && RA<=25000)
            {
                AL=0.10;
            }
                else
                {
                    AL=0.25;
                }
                    printf("\nO imposto de Renta eh:%.2f", IR=RA*AL);
    }
    if (RA<0)
    {
        printf ("\nERRO o valor eh negativo");
    }
    
    
    return (0);
}
