#include <stdio.h>

int Felizes (int N1)
{
    int pas=0, pot, d;

    while (N1!= 1 && pas <= 20)
    {
        pot = 0;

        while (N1 > 0)
        {
            d = N1 % 10;

            pot = pot + (d * d);

            N1 = N1 / 10;
        }
        
        N1 = pot;
        pas++;
    }

    return(N1);
}