#include <stdio.h>

int main (void) {

    int Cc, mil, cent, dez, uni, ulti, inv=0, cont=0, sm=0, x, dv;

    do
    {
        printf("\nInforme o numero da conta corrente: ");
        scanf("%d", &Cc);

        if(Cc < 1000 || Cc > 9999)
        {
            printf("\nValor invalido.");
        }
    }while(Cc < 1000 || Cc > 9999);

    mil = Cc / 1000;
    printf("\nPrimeiro digito: %d", mil);

    cent = Cc % 1000 / 100;
    printf("\nSegundo digito: %d", cent);

    dez = Cc % 100 / 10;
    printf("\nTerceiro digito: %d", dez);

    uni = Cc % 10;
    printf("\nQuarto digito: %d\n", uni);

    ulti = uni;

    inv = (mil * 1) + (cent * 10) + (dez * 100);
    printf("\nInverso: %d", inv);

    cont = (dez * 1) + (cent * 10) + (mil * 100);

    sm = cont + inv;
    printf("\n%d + %d = %d\n", cont, inv, sm);

    mil = sm / 1000;
    printf("\nPrimeiro digito: %d", mil);

    cent = sm % 1000 / 100;
    printf("\nSegundo digito: %d", cent);

    dez = sm % 100 /10;
    printf("\nTerceiro digito: %d", dez);

    uni = sm % 10;
    printf("\nQuarto digito: %d\n", uni);

    x = ((mil * 0) + (cent * 1) + (dez * 2) + (uni * 3));
    printf("\nx = %d", x);

    dv = x % 10;
    printf("\nDigito verificador = %d\n", dv);

    if(ulti == dv)
    {
        printf("\nO digito verificador esta correto!\n");
    }
        else
        {
            printf("\nO digito verificador esta incorreto!\n");
        }

    return (0);
}