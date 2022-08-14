#include <stdio.h>
/* A recursive function that prints the binary representation of a number. */

/**
 * It prints the binary representation of a number by recursively dividing the number by 2 and printing
 * the remainder
 * 
 * @param n The number to be converted to binary.
 * 
 * @return the binary representation of the number.
 */
void correpondente(int n)
{
/* Checking if the number is 0, if it is, it returns. */
    if (n == 0)
        return;
/* Calling the function recursively. */
    else
        correpondente(n / 2);
    printf("%d", n % 2);
}

main()
{
    int num;

    printf("Numero Inteiro Positivo: ");
        scanf("%d", &num);
    printf("\nCorrepondente Binario: \n");
        correpondente(num);
}
