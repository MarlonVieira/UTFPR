#include <stdio.h>

int main (void) {

    char V;
    int cv=0,tt=0, c;

    do
    {
        
        printf("Insira um caractere: ");
        fflush(stdin);
        scanf("%c", &V);

        if(V != '0')
        {
            tt++;
            if (V == 'a' || V == 'e' || V == 'i' || V == 'o' || V == 'u')
        {
            cv++;
        }
        }
        
        
    }while(V != '0');

    printf("O total de vogais minusculas eh: %d", cv);

    printf("\nO total de caracteres eh: %d", tt);


    return(0);
}