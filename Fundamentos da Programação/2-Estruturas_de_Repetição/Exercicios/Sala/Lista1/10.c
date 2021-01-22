#include <stdio.h>
#include <stdlib.h>

int main (void) {

    int q, M, F, I, t;
    char c;
    float pM, pF, pI;
    
    M=0;
    F=0;
    I=0;

    do 
    {
        printf("Informe a quantidade:");
        scanf("%d", &q);

        if (q>0)
        {
            do 
            {
                printf("\nInforme a categoria-Feminino(F), Masculino (M) ou Infantil (I): ");
                fflush(stdin);
                scanf("%c", &c);

                if(c != 'F' && c != 'f' && c != 'M' && c != 'm' && c != 'I' && c != 'i')
                {
                    printf("ERRO: Categoria invalida");
                }

            } while (c != 'F' && c != 'f' && c != 'M' && c != 'm' && c != 'I' && c != 'i');


            if(c == 'M' || c == 'm')
            {
                M=M+q;
            }
            else if(c == 'F' || c == 'f')
            {
                F=F+q;
            }
            else
            {
                I=I+q;
            }
        }

    }while(q > 0);

    t = M + F + I;

    if(t > 0)
    {
        pM = (float)M * 100 / t;
        pF = (float)F * 100 / t;
        pI = (float)I * 100 / t;

        printf("%.2f%% Masculinos\n", pM);
        printf("%.2f%% Femininos\n", pF);
        printf("%.2f%% Infantis\n", pI);
    }

    return (0);
}