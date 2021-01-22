#include <stdio.h>

int main (void)
{

    int LI, LS, inc, i, soma=0, qtde=0;
    float M;

    printf("Informe o valor inicial do intervalo: ");
    scanf("%d", &LI);

    printf("Informe o valor final do intervalo: ");
    scanf("%d", &LS);

    printf("Informe o incremento: ");
    scanf("%d", &inc);


    if(LI > LS)
    {
        i = LI;
        LI = LS;
        LS = i;
    }

    for(i=LI; i<=LS; i=i+inc)
    {

        printf("\n%d\t", i);

        if(i % 2 != 0 && i % 35 == 0)
        {
            soma = soma + i;
            qtde++;
            printf("Impar e divisivel por 35");
        }
    }

    if(qtde > 0)
    {
        M= (float) soma / qtde;
        printf("\nA media dos impares e divisiveis por 35 eh: %.2f\n", M);
    }
    else
    {
        printf("Nao existe nenhum impar divisivel por 35 neste intervalo\n");
    }
    
    return (0);
}
