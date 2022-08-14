#include <stdio.h>
/* A recursive function that calculates the sum of the series S = 1 + 1/2 + 1/3 + ... + 1/n. */
/* It calculates the sum of the series 1/n, where n is the number of terms */

float calculaS(int n)
{
/* Checking if the number is 1, if it is, it returns 1. */
    if (n == 1)
        return 1;
/* Returning the value of the function, which is the sum of the series. */
    else
        return (float)1 / n + calculaS(n - 1);
}

main()
{
    int num;
    do
    {
        printf("Numero: \n");
        scanf("%d", &num);
    } while (num < 1);
        printf("Serie S: %.2f", calculaS(num));
}
