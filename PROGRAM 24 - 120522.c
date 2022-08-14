#include <stdio.h>
/* A recursive function that sums all the numbers from 1 to n. */

int soma(int n)
{
/* Checking if the number is 1, if it is, it returns 1. */
    if (n == 1)
        return 1;
/* Calling the function again, but with a smaller number. */
    else
        return (n + soma(n - 1));
}

main()
{
/* Asking the user to input a number, and then it prints the sum of all the numbers from 1 to the
number the user input. */
    int n;
    printf("Enter a number: ");
        scanf("%d", &n);
    
    printf("%d", soma(n));
}
