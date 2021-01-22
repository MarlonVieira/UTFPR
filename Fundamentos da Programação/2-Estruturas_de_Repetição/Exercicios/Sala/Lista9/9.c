#include <stdio.h>

int main(void) {

    int ida, somaa=0, conta=0, RPB=0, NCA=0, soma=0, cont=0, primeiro=0, menor=0;
    float MCA;
    char op, cur, cida;

    do
    {
    
        do
        {
            printf("\nInforme a idade do aluno: ");
            fflush(stdin);
            scanf("%d", &ida);

            if (ida>0)
            {
                do
                {
                    printf("Informe o curso(Q/q= Quimica ou A/a= Agronomia): ");
                    fflush(stdin);
                    scanf("%c", &cur);

                    if (cur!='Q' && cur!='q' && cur!='A' && cur!='a')
                    {
                        printf("\nERRO: Caracter invalido! Insira M/m ou F/f\n");
                    }

                    if (cur=='A' || cur=='a')
                    {
                        somaa=somaa+ida;
                        conta++;
                    }

                    if (cur=='Q' || cur=='q')
                    {
                        NCA++;
                    }

                    do
                    {
                        printf("Reside em Pato Branco(S/s= Sim ou N/n= Nao): ");
                        fflush(stdin);
                        scanf("%c", &cida);

                        if (cida!='S' && cida!='s' && cida!='N' && cida!='n')
                        {
                            printf("\nERRO: Responda com (S/s= Sim ou N/n= Nao)\n");
                        }
                        
                        if (cida=='S' || cida=='s')
                        {
                            RPB++;
                        }

                        if (cida=='N' || cida=='n')
                        {
                            if (ida<0)
                            {
                                soma=soma+ida;
                                cont++;
                            }
                                
                                if (primeiro==0)
                                {
                                    menor=ida;
                                    primeiro=1;
                                }
                                else
                                {
                                    if (ida<menor)
                                    {
                                        menor=ida;
                                    }
                                    
                                }
                        }

                    } while (cida!='S' && cida!='s' && cida!='N' && cida!='n');
                    
            

                } while (cur!='Q' && cur!='q' && cur!='A' && cur!='a');

                
            }
        } while (ida>0);


    MCA=(float)somaa/conta;
    printf("\nA media de idade dos alunos do curso de Agronomia eh: %.2f", MCA);

    printf("\nA quantidade de alunos que residem em Pato Branco eh: %d", RPB);

    printf("\nA menor idade entre os alunos que nao moram em Pato Branco eh: %d", menor);

    printf("\nA quantidade de alunos que nao cursam Agronomia eh: %d", NCA);

        printf("\n\nDeseja repetir o programa (S ou N): ");
        fflush(stdin);
        scanf("%c", &op);
    }while(op == 'S' || op == 's');

    return(0);
}