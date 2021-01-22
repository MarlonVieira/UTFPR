#include <stdio.h> 

int main(void)  {             
     
    int n, i=1, c=0, c1=0, soma=0; 
    float M=0;

    printf("Quantos multiplos de 5 e impares quer mostrar: ");
    scanf("%d", &n);

    if (n<0)
    {
      n=n*-1;
    }

    do
    {
        if (i%2 !=0 && i%5 == 0)
        {
          printf("%d\n", i);
          c++;
        }
        if (i%3==0)
        {
          c1++;
          soma=soma+i;
        }
        i++;
    } while (c<n);

    if (c1>0)
    {
        M= (float)soma/c1;
        printf("\nA media dos multiplos de 3 eh: %.2f", M);
    }

    return(0);
}