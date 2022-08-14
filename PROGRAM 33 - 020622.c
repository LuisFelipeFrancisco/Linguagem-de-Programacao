#include <stdio.h>
/* A function that returns the number of digits of a number. */

int retorno(int num)
{
/* Checking if the number is 0, if it is, it returns 0. */
    if (num == 0)
        return 0;
/* Checking if the number is 0, if it is, it returns 0, if it is not, it returns 1 + the number of digits of the number divided by 10. */
    else
        return 1 + retorno(num / 10);
}

main()
{
    int x;

/* Asking for a number and checking if it is negative. If it is, it will ask for another number. */
    do
    {
        printf("NUMERO: ");
        scanf("%d", &x);
    } while (x < 0);
/* Printing the number of digits of the number. */
    printf("QTD DE DIGITOS DE %d: %d", x, retorno(x));
}
