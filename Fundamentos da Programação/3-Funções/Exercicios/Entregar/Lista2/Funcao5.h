#include <stdio.h>

int funcao (int Li, int Co, char Ca) {

    int i, j;

    for (i = 1; i <= Li; i++)
    {
        for (j = 1; j <= Co; j++)
        {
            printf("%c   ", Ca);  
            
        }
        printf("\n");
    }
    return (0);
}