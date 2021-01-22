#include <stdio.h>
#include "ConverterMoedas.h"

int main ()

{
    int LI, LS, i;
    float Con, cot, Cotacao;
    char op, tipo;

    do
    {
        do
        {
            printf("Informe um valor que deseja converter: ");
            fflush(stdin);
            scanf("%f", &Con);

            if (Con<=0)
            {
                printf("\nERRO: insira um numero maior que 0.");
            }
            
        } while (Con<=0);
        
        do
        {
            printf("Informe o valor da cotacao: ");
            fflush(stdin);
            scanf("%f", &cot);

            if (cot<=0)
            {
                printf("\nERRO: insira um numero maior que 0.");
            }
            
        } while (cot<=0);

        do
        {
            printf("Informe tipo de conversao (D/d-Dolar ou R/r-Real): ");
            fflush(stdin);
            scanf("%c", &tipo);

            if (tipo!='D' && tipo!='d' && tipo!='R' && tipo!='r')
            {
                printf("\nERRO: insira um valor igual a D/d-Dolar ou R/r-Real.\n\n");
            }
            
        } while (tipo!='D' && tipo!='d' && tipo!='R' && tipo!='r');

        printf("O valor obtido eh: %.2f\n\n\n", ConverterMoedas(Con, cot, tipo));

        printf("Informe o valor do limite inferior: ");
        fflush(stdin);
        scanf("%d", &LI);

        printf("Informe o valor do limite superior: ");
        fflush(stdin);
        scanf("%d", &LS);        

        printf("Informe o valor da cotacao: ");
        fflush(stdin);
        scanf("%f", &Cotacao);

        do
        {
            printf("Informe tipo de conversao (D/d-Dolar ou R/r-Real): ");
            fflush(stdin);
            scanf("%c", &tipo);

            if (tipo!='D' && tipo!='d' && tipo!='R' && tipo!='r')
            {
                printf("\nERRO: insira um valor igual a D/d-Dolar ou R/r-Real.\n\n");
            }
            
        } while (tipo!='D' && tipo!='d' && tipo!='R' && tipo!='r');

        if (tipo=='D' || tipo=='d')
        {
            printf("\nREAIS\t\tDOLARES\n");
        }
        
        else
        {
            printf("\nDOLARES\t\tREAIS\n");
        }

        if (LS<LI)
        {
            i=LS;
            LS=LI;
            LI=i;
        }

        for (i = LI; i <= LS; i++)
        {
            printf("%d\t\t%.2f\n", i, ConverterMoedas((float)i, Cotacao, tipo));
        }

        printf("\n\nDeseja repetir o programa? (S/N) ");
        fflush (stdin);
        scanf("%c", &op);
    } while (op == 'S' || op == 's');
    
    return (0);
}