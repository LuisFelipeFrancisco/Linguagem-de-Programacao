#include <stdio.h>
/* It prints the multiplication table of a number. */

void retorno(int n, int pos)
{
/* The base case of the recursion. */
    if (pos == 0)
        return;
/* Calling the function recursively. */
    else
        retorno(n, pos - 1);

    printf("\n%d X %d = %d", n, pos, n * pos);
}

main()
{
    int x;

    printf("NUMERO: ");
    scanf("%d", &x);

    printf("TABUADA DE %d:\n", x);
    retorno(x, 10);
}
