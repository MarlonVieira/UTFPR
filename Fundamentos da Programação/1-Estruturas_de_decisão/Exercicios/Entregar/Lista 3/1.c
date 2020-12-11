#include <stdio.h>
#include <stdlib.h>

int main (void) {

    int e, h, cg, mp;

    printf("Insira sua nota de humanas:");
        scanf("%d", &h);

    printf("Insira sua nota de conhecimentos gerais:");
        scanf("%d", &cg);

    printf("Insira sua nota de exatas:");
        scanf("%d", &e);

    mp = (((e * 3) + (h * 2) + cg) / 6);

    if ((mp==0) && (mp<=250))
    {
        printf("Nota Insuficiente");
    }
        else if ((mp>=251) && (mp<=500))
        {
            printf("Nota Baixa");
        }
            else if ((mp>=501) && (mp<=700))
            {
                printf("Nota Regular");
            }
                else if ((mp>=701) && (mp<=900))
                {
                    printf("Nota Boa");
                }
                    else if ((mp>=501) && (mp<=700))
                    {
                        printf("Nota Exelente");
                    }
    return (0);
}