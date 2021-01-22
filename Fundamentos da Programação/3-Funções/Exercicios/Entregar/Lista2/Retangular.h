#include <stdio.h>

int Retangular(int N1) {

    int i, cont=0, aux, retangular=0;

    for(i=2; i<=N1 && cont <=N1; i = i+2)
    {
        cont=cont+i; 

        if(cont==N1) 
        {
            aux=i;
            retangular=1;

            printf("\n%d eh retangular ==> ", N1);

            for(i=2; i<=aux; i=i+2) 
            {
                if(i<aux) 
                {
                    printf("%d + ", i);
                }
                else if(i==aux)
                {
                    printf("%d ", i);
                }
            }
            printf("= %d\n", cont);
        }
    }
    return(retangular);
}