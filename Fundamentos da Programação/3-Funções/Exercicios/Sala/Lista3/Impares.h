#include <stdio.h>

int Mostraseequivale (int N1)
{
   int j, soma=0;

   for (j = 1; j < N1; j++)
   {
       if (j%2!=0)
       {
           printf("%d ", j);

           soma=soma+j;
       }
   }

   if (soma==N1)
    {
        printf("=> Equivale a soma dos impares\n");
    }

    else
    {
        printf("=> Nao equivale a soma dos impares\n");
    }

   return (j%2!=0);
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