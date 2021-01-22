#include <stdio.h>

int main (void) {

    int LI, LS, x, y, i;

    printf("\nInsira o valor inicial: ");
    scanf("%d", &LI);

    do
    {
        printf("\nInsira o valor final: ");
        scanf("%d", &LS);

        if(LS == LI)
        {
            printf("\nO valor do limite superior não pode ser igual ao valor do limite inferior\n");
        }
    }while(LS == LI);

    printf("\nInforme X: ");
    scanf("%d", &x);

    printf("\nInforme Y: ");
    scanf("%d", &y);

    if(LI > LS)
    {
        i = LI;
        LI = LS;
        LS = i;
    }

    for(i=LI; i<=LS; i++)
    {
       if(i%x == 0 && i%y != 0)
        {
            printf("%d\t", i);
        }
    }

    return (0);
}