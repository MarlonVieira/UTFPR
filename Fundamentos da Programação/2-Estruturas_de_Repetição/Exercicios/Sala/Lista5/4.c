#include <stdio.h>

int main (void) {

    int i, Am=0, sm=0, c=0; 
    float M;
    char resp;
   
    do
    {
        printf("\nInforme sua idade: ");
        fflush(stdin);
        scanf("%d", &i);

        if (i>0)
        {
        printf("\nAutonomo ou funcionario(A/a/F/f): ");
        fflush(stdin);
        scanf("%c", &resp);

        if(resp == 'A' || resp == 'a' || resp =='F' || resp == 'f')
        {
            if(resp == 'A' || resp == 'a' && i < 18)
            {
                Am++;
            }

            if(resp == 'F' || resp == 'f' && i > 18)
            {
                sm = sm + i;
                c++;
            }
        }
        }
    }while (i > 0);

    M = (float) sm/c;

    printf("\nO total de profissionais autonomos menores de idade eh: %d", Am);

    if (M>0)
    {
        printf("\nA media das idades dos funcionarios com mais de 18 anos eh: %.2f", M);
    }
    

    

    return (0);
}