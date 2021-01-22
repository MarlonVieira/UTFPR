#include <stdio.h>
#include <stdlib.h>

int main (void) {

    int N, x, SOP=0, PRI=1, CT=0, SOT=0, COI=0;
    float MT;

    do
    {
        printf("Informe um numero maior que 2: ");
        scanf("%d", &N);

        if(N <= 2)
        {
            printf("O valor inserido eh invalido!\n");
        }
    }while(N <=2);

    for(x=2; x<=N; x++)
    {
        CT++;
        SOT = SOT + x;

        if(x%2 == 0)
        {
            printf("%d\n", x);
            SOP = SOP + x;
        }
        else
        {
            if(x%9 == 0)
            {
                COI++;
                PRI = PRI * x;
            }
        }
    }

    printf("\n\nSoma de todos os pares: %d\n", SOP);

    if(COI > 0)
    {
        printf("Produto dos impares: %d\n", PRI);
    }
    else
    {
        printf("Produto dos impares: %d\n", PRI);
    }

    MT = (float)SOT / CT;
    printf("A media dos numeros eh: %.2f\n", MT);


    return (0);
}