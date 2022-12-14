#include <stdio.h>
/* A function that returns the multiplication of two numbers using recursion.
 * @param num The number to be multiplied
 * @param qtd quantity of times the number will be multiplied
 * @return the sum of the number and the function itself, but with the quantity of times it will be called reduced by 1. 
*/

int mult(int num, int qtd)
{
    if (qtd == 1)
        return num;
    else
        return num + mult(num, qtd - 1);
}

main()
{
    int a, b;

    printf("NUMERO BASE: ");
    scanf("%d", &a);

    do
    {
        printf("\nVEZES: ");
        scanf("%d", &b);
    } while (b < 1);
        printf("%d X %d = %d", a, b, mult(a, b));
}
