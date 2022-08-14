#include <stdio.h>
/* A recursive function that returns the sum of the series 1/1 - 1/2 + 1/3 - 1/4 + 1/5 - 1/6 + ... + 1/n */

float serie(int n)
{
/* Checking if the number is equal to 1. If it is, it will return 1. */
    if (n == 1)
        return 1;
/* Checking if the number is even or odd. If it is even, it will return the negative value of the number divided by the number. 
If it is odd, it will return the positive value of the number divided by the number. */
    else if (n % 2 == 0)
        return (float)-1 / n + serie(n - 1);
    else
        return (float)1 / n + serie(n - 1);
}

main()
{
    int num;
    
    do
    {
        printf("Numero: \n");
        scanf("%d", &num);
    } while (num < 1);
        printf("Serie S: %.3f", serie(num));
}
