#include <stdio.h>

int main(void) {

    int ida, cs=0, cm=0, cf=0, sal=0, pes=0, somasal=0, contsal=0, RBS=0, NRBS=0;

    float MS=0;

    char op, tipo, mes;

    do
    {
        
        do
        {
            pes++;

            printf("\nInforme a idade da pessoa %d: ", pes);
            fflush(stdin);
            scanf("%d", &ida);

            if (ida<=0)
            {
                break;
            }

            do
            {
                printf("Informe o tipo (P/p= Professor ou E/e= Estudante): ");
                fflush(stdin);
                scanf("%c", &tipo);

                if (tipo!='P' && tipo!='p' && tipo!='E' && tipo!='e')
                {
                    printf("\nERRO: Caracter invalido! Insira M/m ou F/f\n");
                }

                if (tipo=='P' || tipo=='p')
                {
                    do
                    {
                        printf("Insira o salario: ");
                        fflush(stdin);
                        scanf("%d", &sal);

                        if (sal<=0)
                        {
                            printf("\nERRO: Insira um valor maior que 0.\n");
                        }

                        if (sal>0)
                        {
                            somasal=somasal+sal;
                            contsal++;
                        }
                        
                        
                    } while (sal<=0);
                    
                }

                if (tipo=='E' || tipo=='e')
                {
                    
                    printf("Recebe mesada (S/s= Sim ou N/n= Nao): ");
                    fflush(stdin);
                    scanf("%c", &mes);

                    if (mes =='S' || mes =='s')
                    {
                        RBS++;
                    }

                    if (mes =='N' || mes =='n')
                    {
                        NRBS++;
                    }
                    
                }
                
            } while (tipo!='P' && tipo!='p' && tipo!='E' && tipo!='e');
            
        } while (pes<5);

    MS=(float)somasal/contsal;

    printf("\nMedia salarial dos professores eh: R$%.2f", MS);
        
    if (RBS>0)
    {
        printf("\nNumero de estudantes que recebem mesada: %d", RBS);
    }
    
    if (NRBS>0)
    {
        printf("\nNumero de estudantes que nao recebem mesada: %d", NRBS);
    }

        printf("\n\nDeseja repetir o programa (S ou N): ");
        fflush(stdin);
        scanf("%c", &op);

    }while(op == 'S' || op == 's');
  
  return (0);
}