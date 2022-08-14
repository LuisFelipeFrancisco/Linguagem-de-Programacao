#include <stdio.h>

int fibo(int n)
{
/* It's checking if the number is 1 or 2, if it is, it returns 1. If it's not, it returns the fibonacci number of the number. */
    if ((n == 1) || (n == 2)) // 1 = 1 | 1 + 1 = 1
        return 1;
/* It's returning the fibonacci number of the number. */
    else
        return fibo(n - 2) + fibo(n - 1); // n-x + n-1
}

main()
/* It's asking for a number and then printing the fibonacci number of that number. */
{
    int x;
    do
    {
        printf("Termo desejado: \n");
        scanf("%d", &x);
    } while (x <= 0);
        printf("\nValor do termo %d", fibo(x));
}
