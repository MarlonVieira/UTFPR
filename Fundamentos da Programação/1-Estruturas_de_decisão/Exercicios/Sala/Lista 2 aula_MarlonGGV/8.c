#include <stdio.h>
#include <stdlib.h>

int main (void) {

    float SBE, G, IR, SBO, SL;

        printf ("Adicione seu salario base: ");
            scanf("%f", &SBE);

        printf("Adicione sua gratificacao: ");
            scanf("%f", &G);

        SBO = SBE + G;


        if (SBO<1000)
        {
            IR= SBO*0.15;
        }
            else
            {
                IR= SBO*0.20;
            }
            
            SL= SBO-IR;

    printf("O seu salario liquido eh: %.2f", SL);

    return(0);
}