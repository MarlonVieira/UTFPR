#include <stdio.h>

int triangulo (int Li, char p)
{
    int  i, j;

    if (p=='P' || p=='p')
    {
            
        for (i = 1; i <= Li; i++)
        {
            for (j = 1; j <= i; j++) 
            {
                printf("*");     
            }
            printf("\n");
        }
    }

    else if (p=='V' || p=='v')
    {
        printf("*\n");

        for (i = 2; i < Li; i++)
        {
            printf("*");

            for (j = 2; j < i; j++)
            {
                printf(" ");
            }
            printf("*\n");
        }
        for (i = 1; i <= Li; i++)
        {
            printf("*");
        }
    }

    return (0);
}