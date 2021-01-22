#include <stdio.h>
#include <stdlib.h>

int main (void) {

    int num1, num2, num3, meio;

        printf ("\ninsira um numero:");
            scanf("%d", &num1);

        printf ("\ninsira um segundo numero:");
            scanf("%d", &num2);

        printf ("\ninsira um terceiro numero:");
            scanf("%d", &num3);


    if(num1 > num2 && num1 < num3 || num1 < num2 && num1>num3)
    {
        meio=num1;
    }
    else if (num2 > num1 && num2 < num3 || num2 < num1 && num2 > num3)
    {
        meio=num2;
    }

    else
    {
        meio=num3;
    }

    printf ("o valor do meio eh:%d", meio);

    return (0);
}