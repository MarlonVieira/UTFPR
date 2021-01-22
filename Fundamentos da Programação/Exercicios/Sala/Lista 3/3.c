#include <stdio.h>
#include <stdlib.h>

int main (void) {

    int Mes, Dia;

    printf ("Insira o dia do seu aniversario: ");
        scanf ("%d", &Dia);

    printf ("Insira o mes do seu aniversario em numero: ");
        scanf ("%d", &Mes);


    if ((Mes ==12 && Dia >=22 && Dia <=31) || (Mes ==1 && Dia >=1 && Dia <=20 ))
    {
        printf("O seu signo eh Capricornio");
    }
        else if ((Mes ==1 && Dia >=21 && Dia <=31) || (Mes ==2 && Dia >=1 && Dia <=19 ))
        {
            printf("O seu signo eh Aquario");
        }
            else if ((Mes ==2 && Dia >=20 && Dia <=31) || (Mes ==3 && Dia >=1 && Dia <=20 ))
        {
                printf("O seu signo eh Peixes");
        }
                else if ((Mes ==3 && Dia >=21 && Dia <=31) || (Mes ==4 && Dia >=1 && Dia <=20 ))
                {
                    printf("O seu signo eh Aries");
                }
                    else if ((Mes ==4 && Dia >=21 && Dia <=31) || (Mes ==5 && Dia >=1 && Dia <=20 ))
                    {
                        printf ("O seu signo eh Touro");
                    }
                        else if ((Mes ==5 && Dia >=21 && Dia <=31) || (Mes ==6 && Dia >=1 && Dia <=20 ))
                        {
                            printf ("O seu signo eh Gemeos");
                        }
                            else if ((Mes ==6 && Dia >=21 && Dia <=31) || (Mes ==7 && Dia >=1 && Dia <=21 ))
                            {
                                printf ("O seu signo eh Cancer");
                            }
                                else if ((Mes ==7 && Dia >=22 && Dia <=31) || (Mes ==8 && Dia >=1 && Dia <=22 ))
                                {
                                    printf ("O seu signo eh Leao");
                                }
                                    else if ((Mes ==8 && Dia >=23 && Dia <=31) || (Mes ==9 && Dia >=1 && Dia <=22 ))
                                    {
                                        printf ("O seu signo eh Virgem");
                                    }
                                        else if ((Mes ==9 && Dia >=23 && Dia <=31) || (Mes ==10 && Dia >=1 && Dia <=22 ))
                                        {
                                            printf ("O seu signo eh Libra");
                                        }
                                            else if ((Mes ==10 && Dia >=23 && Dia <=31) || (Mes ==11 && Dia >=1 && Dia <=21 ))
                                            {
                                                printf ("O seu signo eh Escorpiao");
                                            }
                                                else if ((Mes ==11 && Dia >=22 && Dia <=31) || (Mes ==12 && Dia >=1 && Dia <=21 ))
                                                {
                                                    printf ("O seu signo eh Sagitario");
                                                }
                                                    else
                                                    {
                                                        printf ("ERRO dia ou mes inserido sao invalidos");
                                                    }
                                                    
    return (0);
}