# include <stdio.h> 
# include <stdlib.h> 
#include <math.h>

int main(void)  {
     
    int n, p=0, i; 

    do
    {
        printf("\nInsira um numero maior ou igual a 0: ");
        scanf("%d", &n);

    } while (n<0);

    if (i % n == 0)
    {
        printf("\n");
    }
    
    for(i = 0; i < n; i++)
    {
        printf("%d\t", p=p+2);
    }

    return(0);
}