#include <stdio.h>
#include <stdlib.h>

int main (void)
{

    int LI, LS, i, sm=0, md=0;
    float M;

    do 
    {
        printf("\nInforme limite inferior: ");
        scanf("%d", &LI);

        if(LI <= 0)
        {
            printf("Valor invalido\n");
        }
    }while(LI <= 0);

    do 
    {
        printf("\nInforme o limite superior: ");
        scanf("%d", &LS);

        if(LS == LI || LS <=0)
        {
            printf("Valor invalido\n");
        }
    }while(LS == LI || LS <= 0);

    if(LI > LS)
    {
        i = LI;
        LI = LS;
        LS = i;
    }

    for(i=LI; i<=LS; i++)
    {
        printf("%d\t", i);

        if (i%11==0 && i%7==0)
        {
            sm=sm+i;
            md++;
        }

    }

    if(md > 0)
    {
        M = (float)sm / md;
        printf("\n\tA media dos divisiveis por 11 e 7 eh: %.2f", M);
    }
    else
    {
        printf("\nNao existe nenhum numero divisivel por 11 e 7 neste intervalo\n");
    }

    return(0);
}
