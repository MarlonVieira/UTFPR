#include <stdio.h>

int MostraMultiplos (int N1, int M)
{
   int j;

   for (j = 1; j <= N1; j++)
   {
       if (j%M==0)
       {
           printf("%d ", j);
       }
   }
   return (j%M==0);
}

int SomaMultiplos (int N1, int M)
{
    int i, soma=0;

    for (i = 1; i <= N1; i++)
    {   
        if (i%M==0)
        {
            soma = soma + i;
        } 
    }
    return(soma);
}