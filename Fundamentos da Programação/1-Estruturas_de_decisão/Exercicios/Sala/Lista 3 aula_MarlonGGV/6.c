// printf("A data eh valida:\ndia:%d mes:%d ano:%d ", d, m, a);


#include <stdio.h>
#include <stdlib.h>


int main (void){

    int d, m, a;

        printf("\nInsira o dia: ");
            scanf("%d", &d);

        printf("\nInsira o mes: ");
            scanf("%d", &m);

        printf("\nInsira o ano: ");
            scanf("%d", &a);

        if (m == 1 && d <= 31)
        {
            printf("A data eh valida:\ndia:%d mes:%d ano:%d ", d, m, a);
        }
            else if (m < 1 || m > 12 || d < 1 || d > 31)
            {
                printf("\nData invalida.");
            }
                else if (m == 2 && d <=28)
            {
                    printf("A data eh valida:\ndia:%d mes:%d ano:%d ", d, m, a);
            }
                    else if(m == 2)
                    {
                        if((a % 4 == 0) && (a % 100 != 0) || (a % 400 == 0))
                        {
                        if (d > 29)
                        {
                            printf("\nData invalida.");
                        }
                            else
                            {
                                printf("A data eh valida:\ndia:%d mes:%d ano:%d ", d, m, a);
                            }
                        }
                        else
                        {
                            if(d > 28)
                            {
                                printf("\nData invalida.");
                            }
                                else
                                {
                                    printf("A data eh valida:\ndia:%d mes:%d ano:%d ", d, m, a);
                                }
                        }
                    }
            else if (m == 3 && d <=31)
            {
                printf("A data eh valida:\ndia:%d mes:%d ano:%d ", d, m, a);
            }         
                else if (m == 4 && d <= 30)
                {
                    printf("A data eh valida:\ndia:%d mes:%d ano:%d ", d, m, a);
                }
                    else if (m == 5 && d <= 31)
                    {
                        printf("A data eh valida:\ndia:%d mes:%d ano:%d ", d, m, a);
                    }
                        else if (m == 6 && d <= 30)
                        {
                            printf("A data eh valida:\ndia:%d mes:%d ano:%d ", d, m, a);
                        }
                            else if (m == 7 && d <= 31)
                            {
                                printf("A data eh valida:\ndia:%d mes:%d ano:%d ", d, m, a);
                            }
                                else if (m == 8 && d <= 31)
                                {
                                    printf("A data eh valida:\ndia:%d mes:%d ano:%d ", d, m, a);
                                }
                                    else if (m == 9 && d <= 30)
                                    {
                                        printf("A data eh valida:\ndia:%d mes:%d ano:%d ", d, m, a);
                                    }
                                        else if (m == 10 && d <= 31)
                                        {
                                            printf("A data eh valida:\ndia:%d mes:%d ano:%d ", d, m, a);
                                        }
                                            else if (m == 11 && d <= 30)
                                            {
                                                printf("A data eh valida:\ndia:%d mes:%d ano:%d ", d, m, a);
                                            }
                                                else if (m == 12 && d <= 31)
                                                {
                                                    printf("A data eh valida:\ndia:%d mes:%d ano:%d ", d, m, a);
                                                }
                                                    else
                                                    {
                                                        printf("\nData invalida.");
                                                    }


    return (0);
}