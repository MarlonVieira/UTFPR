#include <stdio.h>

int Triangular(int N1)
{
    int p, i, tri=0;

        for(i = 1; i <= N1; i++)
        {
            p = i * (i+1) * (i+2);

            if(p == N1)
            {
                tri = 1;
                printf("\n%d eh triangular ==> %d * %d * %d = %d\n", N1, i, i+1, i+2, N1);
                break;
            }
        }
    return(tri);
}