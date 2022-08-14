#include <stdio.h>
/* The recursive function. */

int fatorial(int n)
{
/* The base case of the recursion. */
    if ((n == 0) || (n == 0)) 
        return 1;
/* Calling the function `fatorial` again, but with a different argument. */
    else
        return n * fatorial(n - 1);
}

main()
{
    int num, fat;

    do
    {
        printf("Digite um numero: ");
        scanf("%d", &num);
        if (num < 0)
            printf("Erro: Nao e possivel calcular fatorial de numero negativo!\n");
        else
        {
/* Calling the function `fatorial` and passing the value of `num` as an argument. */
            fat = fatorial(num);
            printf("Fatorial de %d: %d\n", num, fat);
        }
    } while (1);
}
