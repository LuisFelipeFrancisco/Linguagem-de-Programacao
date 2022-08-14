#include <stdio.h>
/* A recursive function that returns the sum of the two previous numbers in the Fibonacci sequence. */

int fibo(int n)
{
/* Checking if the number is 1 or 2, if it is, it returns 1. */
    if ((n == 1) || (n == 2)) // 1 = 1 | 1 + 1 = 1
        return 1;
/* Returning the sum of the two previous numbers in the Fibonacci sequence. */
    else
        return fibo(n - 2) + fibo(n - 1); // n-x + n-1 ||
}

main()
{
    int x, i;
/* It's asking the user to input a number, and if the number is less than 1, it will ask again. */
    do
    {
        printf("Qtd Termos: \n");
        scanf("%d", &x);
    } while (x < 1);
/* Printing the fibonacci sequence. */
    for (i = 1; i <= x; i++)
        printf("%d ", fibo(i));
}
