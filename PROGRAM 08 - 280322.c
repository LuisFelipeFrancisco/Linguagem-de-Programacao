/**
 * The function addNumbers() takes two integers as input and returns the sum of the two numbers
 * 
 * @param a This is the first parameter.
 * @param b This is the name of the parameter.
 * 
 * @return The result of the addition of the two numbers.
 */
#include <stdio.h>
int addNumbers(int a, int b) // function definition
{
/* Returning the result of the addition of the two numbers. */
    int result;
    result = a + b;
    return result; // return statement
}

int main()
{
    int n1, n2, sum;

    printf("Enters two numbers: ");
    scanf("%d %d", &n1, &n2);

    sum = addNumbers(n1, n2); // function call
    printf("sum = %d", sum);

    return 0;
}
