#include <stdio.h>

int Fatorial(int N1)
{
   int i, fat ;

   if (N1 <= 1)
      return (1) ;

   fat = 1 ;
   for (i=2; i <= N1; i++)
      fat *= i ;

   return (fat) ;
}