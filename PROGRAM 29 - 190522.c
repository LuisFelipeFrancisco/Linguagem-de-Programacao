#include <stdio.h>

/* It calculates the sum of the series S = 1/2 + 2^2/5 + 3^2/8 + 4^2/11 + ... + n^2/(n+3) */
float calculaS(int n)
{
/* A recursive function that calculates the sum of the series S = 1/2 + 2^2/5 + 3^2/8 + 4^2/11 + ... + n^2/(n+3) */
    if (n == 1)
        return 0.5;
    else
/* Returning the sum of the series S = 1/2 + 2^2/5 + 3^2/8 + 4^2/11 + ... + n^2/(n+3) */
        return (float)(n * n + 1) / (n + 3) + calculaS(n - 1);
}

main()
{
    int num;
    do
    {
        printf("Numero: \n");
        scanf("%d", &num);
    } while (num < 1);
        printf("Serie S: %.3f", calculaS(num));
}
