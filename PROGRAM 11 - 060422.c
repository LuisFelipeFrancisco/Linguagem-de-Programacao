#include <stdio.h>

/* This function returns the greater of two integers. */
int maior_valor(int a, int b)
{
/* Comparing the two values and returning the greater one. */
    if (a > b)
        return a;
    else
        return b;
}

main()
{
    int a, b;

    printf("Informe o primeiro numero: ");
    scanf("%d", &a);

    printf("Informe o segundo numero: ");
    scanf("%d", &b);

    printf("\nO maior valor e: %d", maior_valor(a, b));

    return 0;
}
