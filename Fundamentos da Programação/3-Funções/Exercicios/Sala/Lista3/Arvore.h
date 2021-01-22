#include <stdio.h>  

int Arvore (int N1)
{
    int i, j, k=1, l, m;

    for (i = 1; i <= N1; i++)
    {

        for (j = N1; j >= i; j--)
        {   
            printf (" ");
        }
        for (k = 1; k <= i*2-1; k++)
        {
            printf ("*");
        }
        printf ("\n");
    }

    for (m = N1/2; m < N1; m++)
    {
        for (l = 1; l <= k/2; l++)
        {
            printf (" ");
        }
        printf ("*\n");
    }

    return (0);
}
