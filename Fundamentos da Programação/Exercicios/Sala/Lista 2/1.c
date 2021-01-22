#include <stdio.h>
#include <stdlib.h>

int main (void) {

    int num1, num2, num3, menor;

        printf ("\ninsira um numero:");
            scanf("%d", &num1);

        printf ("\ninsira um segundo numero:");
            scanf("%d", &num2);

        printf ("\ninsira um terceiro numero:");
            scanf("%d", &num3);


    if(num1 < num2 && num1 < num3)
    {
        menor=num1;
    }
    else if (num2 < num3)
    {
        menor=num2;
    }

    else
    {
        menor=num3;
    }

    printf ("o menor valor eh:%d", menor);

    return (0);
}