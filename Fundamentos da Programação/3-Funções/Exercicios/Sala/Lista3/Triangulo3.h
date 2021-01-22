#include <stdio.h>  

int Triangulo3 (int N1)
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
    
    return (0);
}
