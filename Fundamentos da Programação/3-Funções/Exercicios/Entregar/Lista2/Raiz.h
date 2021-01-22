#include <stdio.h>
#include <math.h>

int Raiz (int N1)
{

    int n, i;

    i = sqrt(N1);

    if (i*i==N1)
    {
        return(i);
    }
    
    else
    {
        return(0);
    }
    return(i);
}