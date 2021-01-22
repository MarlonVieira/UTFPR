#include <stdio.h>

int main (void) {

    int QP, n1, n10, n5;    
    float VU, p, t, c,TC=0;


    do
    {
        printf("\nInforme a quantidade do produto: ");
        scanf("%d", &QP);

        if(QP > 0)
        {
            do
            {
                printf("\nInforme o valor unitario do produto: ");
                scanf("%f", &VU);

                if(VU < 0)
                {
                    printf("\nValor invalido! Digite novamente\n");
                }
            }while(VU < 0);
            TC = TC + (VU*QP);
        }
    }while(QP > 0);

    printf("\nTotal da compra: %.2f\n", TC);
    
    printf("\nInforme o valor pago pelo cliente: R$");
    scanf("%f", &p);

    t = p - TC;
    printf("\nTROCO: %.2f\n", t);

    printf("\nO troco sera devolvido com: \n\n");

    n10 = (int)t / 10;
    printf("%d nota(s) de 10 reais\n", n10);

    n5 = (int)t % 10 / 5;
    printf("%d nota(s) de 5 reais\n", n5);

    n1 = (int)t % 5;
    printf("%d nota(s) de 1 real\n", n1);

    c = t  - (int)t;
    printf("e %.2f centavos\n\n", c);

    return (0);

}