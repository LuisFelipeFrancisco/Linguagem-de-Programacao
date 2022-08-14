#include <stdio.h>
#include <conio.h>
/* A recursive function that calculates the exponential of x to the power of y. */

int expo (int x, int y)
{
/* Checking if y is equal to 0, if it is, it returns 1. */
    if (y == 0)
        return 1;
/* Checking if y is equal to 1, if it is, it returns x. */
    if (y == 1)
        return x;
/* Multiplying x by the result of the function expo(x, y - 1). */
    return x * expo(x, y - 1);
}

int main()
{
    int x, y, e;

    printf("Exponencial de x elevado a y\n\n");

    printf("\nDigite o numero inteiro x: ");
        scanf("%d", &x);
    printf("\nDigite o numero inteiro y: ");
        scanf("%d", &y);
    
/* Checking if y is less than 0, if it is, it prints the message "y tem que ser maior ou igual a
zero!!" */
    if (y < 0)
    {
        printf("y tem que ser maior ou igual a zero!!");
    }
/* Calling the function expo(x, y) and printing the result. */
    else
    {
        e = expo(x, y);
        printf("\n\n%d elevado a %d eh: %d", x, y, e);
    }
}
