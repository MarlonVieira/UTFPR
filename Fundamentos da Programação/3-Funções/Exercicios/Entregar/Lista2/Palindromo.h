#include <stdio.h>

int Palindromo(int N1)
{
    int ajuda, inverso=0, resultado=0; 

    ajuda=N1;

    while(ajuda != 0) 
    {
        inverso =  (inverso * 10) + ajuda % 10;
        ajuda = ajuda / 10; 
    }

    if(inverso==N1) 
    {
        resultado = 1;
    }

    return(resultado);
}