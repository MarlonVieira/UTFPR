#include <stdio.h>
#include <stdlib.h>

int main (void) {

    int temp;
    char cli, chu, fome, res, bar, alt, fds;

    printf("Algum cliente no restaurante (L=lotado N=Nao; S=Sim;):");
    scanf("%c",&cli);

    if (cli== 'n' || cli== 'N')
    {
        printf("\nSe nao ha clientes voce sera atendido imediatamente");
    }
        else if (cli == 's' || cli== 'S')
        {
            printf("\nSe tem poucos clientes voce logo sera atendido");
        }
            else if (cli== 'l' || cli== 'L')
            {
                printf("\nO restaurante esta cheio, em quantos minutos voce sera atendido?:");
                    scanf("%d", &temp);

                if (temp >= 0 && temp <=10 )
                {
                    printf("\nPode esperar, ja que nao ira demorar\n");
                }
                    else if(temp > 10 && temp <= 30)
                    {
                        printf("Esta com muita fome (S/N)? ");
                            fflush(stdin);
                            scanf("%c", &fome);

                        if(fome == 'n' || fome == 'N')
                        {
                            printf("\nVoce pode esperar, nao vai demorar\n");
                        }
                            else if(fome == 's' || fome == 'S')
                            {
                                printf("Existe algum restaurante alternativo (S/N)? ");
                                    fflush(stdin);
                                    scanf("%c", &alt);

                                    if(alt == 'n' || alt == 'N')
                                    {
                                        printf("\nVoce pode esperar, nao vai demorar\n");
                                    }
                                        else if(alt == 's' || alt == 'S')
                                        {
                                            printf("Esta chovendo (S/N)? ");
                                                fflush(stdin);
                                                scanf("%c",&chu);

                                            if(chu == 'n' || chu == 'N')
                                            {
                                                printf("\nVai em outro restaurante\n");
                                            }
                                                else if(chu == 's' || chu == 'S')
                                                {
                                                    printf("\nVoce pode esperar, nao vai demorar\n");
                                                }
                                                    else
                                                    {
                                                        printf("\nERRO: caractere inserido invalido");
                                                    }
                                        }
                                            else
                                            {   
                                                printf("\nERRO: caractere inserido invalido");
                                            }
                            }
                                else
                                {
                                    printf("\nERRO: caractere inserido invalido");
                                }
                    }
                        else if(temp > 30 && temp <= 60)
                        {
                            printf("Algum restaurante alternativo (S/N)? ");
                                fflush(stdin);
                                scanf("%c",&alt);

                            if(alt == 'n' || alt == 'N')
                            {
                                printf("\nTem reserva (S/N)? ");
                                fflush(stdin);
                                scanf("%c",&res);

                                if(res == 's' || res == 'S')
                                {
                                    printf("\nVoce pode esperar, nao vai demorar\n");
                                }
                                    else if(res == 'n' || res == 'N')
                                    {
                                        printf("Tem algum bar (S/N)? ");
                                        fflush(stdin);
                                        scanf("%c",&bar);

                                        if(bar == 'n' || bar == 'N')
                                        {
                                            printf("\nNao vai esperar\n");
                                        }
                                            else if(bar == 's' || bar == 'S')
                                            {
                                            printf("\nVoce pode esperar, nao vai demorar\n");
                                            }
                                                else
                                            {
                                                printf("\nERRO: caractere inserido invalido");
                                            }
                                    }
                                        else
                                        {
                                            printf("\nERRO: caractere inserido invalido");
                                        }
                            }
                                else if(alt == 's' || alt == 'S')
                            {
                                    printf("Eh fim de semana (S/N)? ");
                                    fflush(stdin);
                                    scanf("%c", &fds);

                                    if(fds == 'n' || fds == 'N')
                                    {
                                        printf("\nNao vai esperar\n");
                                    }
                                        else if(fds == 's' || fds == 'S')
                                        {
                                            printf("\nVoce pode esperar, nao vai demorar\n");
                                        }
                                            else
                                            {
                                                printf("\nERRO: caractere inserido invalido");
                                            }
                            }
                                else
                                {
                                printf("\nERRO: caractere inserido invalido");
                                }
                        }
                            else
                            {
                                printf("\nNao vai esperar\n");
                            }
            }
                else
                {
                    printf("\nERRO: caractere inserido invalido");
                }

    return (0);
}