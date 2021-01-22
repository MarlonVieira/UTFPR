#include <stdio.h>

int Diamante (int N1)
{
    int i=0, j=0, k=0, asterisco, vazio;
    float meio;

        asterisco=1;
        vazio=N1;
        meio=N1/2;

    for (j = 0; j <= meio; j++)
    {

        for (i = 1; i <= vazio; i++)
        {
            printf(" ");
        }
        vazio--;

        for (k = 0; k < asterisco; k++)
        { 
            printf("*");
        }

        printf("\n");
        asterisco = asterisco + 2;
        
    }
    asterisco = asterisco - 2;
    vazio++;

    for (j = 0; j <= meio; j++)
    {
        asterisco = asterisco - 2;
        vazio++;

        for (i = 0; i < vazio; i++)
        {
              printf(" ");
        }
        for (k = 0; k < asterisco; k++)
        {
            printf("*");
        }

        printf("\n");
    }

    return (0);
}