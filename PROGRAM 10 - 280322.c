#include <stdio.h>
/* Program to Calculate Area of Rectangle. */
float mult(int x, int y) // definição da função
{
/* Returning the result of the multiplication of x and y. */
    float result;
    result = x * y;
    return result; // retorno da função
}
main()
{

    double n1, n2, area;

    printf("Digite a largura do retangulo: ");
    scanf("%f", &n1);
    printf("Digite a altura do retangulo: ");
    scanf("%f", &n2);

    area = mult(n1, n2); // chamado da função
    printf("Area do retangulo: %lf\n", area);
}
