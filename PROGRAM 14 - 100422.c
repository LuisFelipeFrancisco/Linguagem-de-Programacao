#include <stdio.h>
#include <stdlib.h>

int fat(int num)
{
/* It's a function that calculates the factorial of a number. */
    int result, i;
    result = 1;

    for (i = num; i > 1; i--)
        result = result * i;

    printf("\n%d! = %d\n", num, result);
    return 0;
}

main()
{
    int fatorial, n1, n2, n3, n4, n5;

    printf("\nDigite 5 numeros inteiros:\n");
    scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);
    printf("\nFatoriais:\n");
    fatorial = fat(n1);
    fatorial = fat(n2);
    fatorial = fat(n3);
    fatorial = fat(n4);
    fatorial = fat(n5);

    system("pause");
}
