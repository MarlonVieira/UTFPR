#include <stdio.h>

int main(void) {

    int cs=0, cm=0, cf=0;

    float a, percf=0, percm=0, MM=0, MF=0, maior=0, menor, somam=0, soma=0, somaf=0, cont=0, primeiro=0;

    char op, sexo;

    do
    {
    
        do
        {
            printf("\nInforme a altura: ");
            fflush(stdin);
            scanf("%f", &a);

            
            
            if (a!=0)
            {
                if (a<0)
                {
                    soma=soma+a;
                    cont++;
                }
                
                if (primeiro==0)
                {
                    maior=a;
                    menor=a;
                    primeiro=1;
                }
                else
                {
                    if (a>maior)
                    {
                        maior=a;
                    }
                    else if (a<menor)
                    {
                        menor=a;
                    }
                }
            }

            if (a<=0)
            {
                break;
            }

            do
            {
                printf("Informe o sexo(M/m ou F/f): ");
                fflush(stdin);
                scanf("%c", &sexo);

                if (sexo!='M' && sexo!='m' && sexo!='F' && sexo!='f')
                {
                    printf("\nERRO: Caracter invalido! Insira M/m ou F/f\n");
                }

                if (sexo=='M' || sexo=='m')
                {
                    somam=somam+a;
                    cm++;
                }

                if (sexo=='F' || sexo=='f')
                {
                    somaf=somaf+a;
                    cf++;
                }
                
                
            } while (sexo!='M' && sexo!='m' && sexo!='F' && sexo!='f');
            
        } while (a>0);


        cs=cm+cf;

        printf("\nA maior altura do grupo eh: %.2f\n", maior);

        printf("A menor altura do grupo eh: %.2f\n", menor);


        printf("\n==== MULHERES ====\n");
        printf("Quantidade: %d\n", cf);

        MF=(float)somaf/cf;
        printf("Media de altura: %.2f\n", MF);

        percf=(float)cf*100/cs;
        printf("Percentual: %.2f\n", percf);




        printf("\n==== HOMENS ====\n");
        printf("Quantidade: %d\n", cm);

        MM=(float)somam/cm;
        printf("Media de altura: %.2f\n", MM);

        percm=(float)cm*100/cs;
        printf("Percentual: %.2f", percm);
    

        printf("\n\nDeseja repetir o programa (S ou N): ");
        fflush(stdin);
        scanf("%c", &op);

    }while(op == 'S' || op == 's');
  
  return (0);
}