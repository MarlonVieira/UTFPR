#include <stdio.h>

int main (void) {

    float N1, VDe=0, VBD=0, DPA=0;
    int Ano, i=0;

    do
    {
        printf("\nInforme um valor do bem depreciado: ");
        fflush(stdin);
        scanf("%f", &N1);

        if (N1<=0)
        {
            printf("\nERRO: Informe um valor maior que 0.\n");
        }
    }while (N1<=0);

    do
    {
        printf("\nInforme o periodo de depreciacao (em anos): ");
        fflush(stdin);
        scanf("%d", &Ano);

        if (Ano<=0)
        {
            printf("\nERRO: Informe um valor maior que 0.\n");
        }
    }while (Ano<=0);

    printf("\nANO\t\tVALOR DO BEM\t\tDEPRECICAO\t\tVALOR DEPRECIADO");
    printf("\n==================================================================================");
    for (i = 1; i <=Ano; i++)
    {
        N1=N1-VDe;
        VDe = N1 * (1.5 / 100);
        VBD = (N1 - VDe);
        
        DPA=VDe+DPA;

        printf("\n%d\t\t %.2f\t\t%.2f\t\t\t\t%.2f", i, N1, VDe, VBD);
    }
    printf("\n==================================================================================");

    printf("\nDepreciacao acumulada: %.2f\n", DPA);

    return (0);
}