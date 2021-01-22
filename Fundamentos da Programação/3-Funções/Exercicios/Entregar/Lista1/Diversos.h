#include <stdio.h>

int Quadrado (int N1)
{
    int quadrado;

    quadrado = N1 * N1;

    return(quadrado);
}

float Polegada (float N1)
{
    float pole;

    pole = N1*0.393701;

    return (pole);
}

float ConverterMoedas(float Valor, float Cotacao, char Tipo)
{
    float resultado;

    if (Tipo=='D' || Tipo=='d')
    {
        resultado=Valor/Cotacao;
    }
    
    else
    {
        resultado=Valor*Cotacao;
    }
    return(resultado);
}

int Tabuada (int x, int y)
{
    return(x*y);
}