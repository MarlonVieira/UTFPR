#include <stdio.h>
#include <stdlib.h>

int main (void) {

    float SM, SB, SL, INSS;

    printf ("Insira seu salario bruto: ");
        scanf ("%f", &SB);

    printf ("Insira o salario minimo atual: ");
        scanf ("%f", &SM);

    if (SB <=SM * 3 )
    {
        (INSS = SB*0.08);

        printf("O seu salario liquido eh: R$%.2f", SL=SB-INSS);
        
    }
        else
        {
            (INSS=SB*0.10);

            if(INSS <= SL)
        {
            SL = SB - INSS;
        }
            else
            {
                INSS = SM;
                SL = SB - INSS;
            }
        printf("\nO desconto do INSS eh: R$%.2f\nO salario liquido eh: R$%.2f", INSS, SL);
        }



    return (0);
}