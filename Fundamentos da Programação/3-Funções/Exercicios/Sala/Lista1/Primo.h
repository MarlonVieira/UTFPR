#include <stdio.h>

int Primo(int N1)
{
    int cont=0, i=0;

    for (i = 2; i < N1; i++)
    {
        if (N1%i==0)
        {
            cont++;
            break;
        }
        
    }
    return(cont);
}