#include <stdio.h>

int main (void) {

    int i, cont=0;

    for(i=1000; i>=0; i--)
    {

        if (i%10==0)
        {
            printf("\t%d", i);
            cont++;
            
            if(cont%8 == 0)
            {
                printf("\n");
            }
        }
    }

    return(0);
}