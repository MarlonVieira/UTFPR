#include <stdio.h>
#include <stdlib.h>

int main (void) {

    char P, d;
    float t;

    printf("\nComo o paciente se sente bem responda com S ou N: ");
        scanf("%c", &P);

    if ((P== 'S') || (P=='s'))
    {
        printf ("O cliente esta saudavel");
    }
    
        else if ((P== 'N') || (P=='n'))
        {
            printf ("O paciente esta com dor responda com S ou N:");
                fflush(stdin);
                scanf("%c", &d);

            if ((d== 'S') || (d=='s'))
            {
                printf ("O paciente esta doente");
            }
                else if ((d== 'N') || (d=='n'))
                {
                    printf ("Qual a temperatura do paciente:");
                        fflush(stdin);
                        scanf("%f", &t);
                    
                    if (t <=37)
                    {
                        printf("O Paciente esta saudavel");
                    }
                        else if (t > 37)
                        {
                            printf("O paciente esta doente");
                        }
                            else 
                            {
                                printf("ERRO: Insira um numero");
                            }

                }
                
        }
        else
        {
            printf("ERRO: Caractere inserido invalido");
        }

    return (0);
}