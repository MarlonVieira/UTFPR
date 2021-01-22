#include <stdio.h>

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