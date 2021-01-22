#include <stdio.h>

int main (void) {

    int LI, LS, i;

    printf("Informe limite inferior: ");
    scanf("%d", &LI);

    printf("Informe o limite superior: ");
    scanf("%d", &LS);

    if(LI > LS)
    {
        i = LI;
        LI = LS;
        LS = i;
    }

    for(i=LI; i<=LS; i=i+1)
    {

        if(i % 2 == 0 && i % 3 == 0)
        {

            printf("%d\t", i);
        }
    }










    return (0);
}   