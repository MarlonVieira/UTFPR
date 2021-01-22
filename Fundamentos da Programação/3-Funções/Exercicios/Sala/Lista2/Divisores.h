#include <stdio.h>

int MostraDivisores(int N1)
{
   int j;

   for (j = 1; j <= N1; j++)
   {
       if (N1%j==0)
       {
           printf("%d ", j);
       }
   }
   return (N1%j==0);
}

int Divisores(int N1)
{
   int i, cont=0;

   for (i = 1; i <= N1; i++)
   {
       if (N1%i==0)
       {
           cont++;
       }
   }
   return (cont);
}

int SomaDivisores (int N1)
{
    int i, soma=0;

    for (i = 1; i <= N1; i++)
    {   
        if (N1%i==0)
        {
            soma = soma + i;
        } 
    }
    return(soma);
}

int MDC (int N1, int N2)
{
    int resto;

    do 
    {
        resto = N1 % N2;

        N1 = N2;
        N2 = resto;

    } while (resto != 0);

    return(N1);
}