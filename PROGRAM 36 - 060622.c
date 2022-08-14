#include <stdio.h>

int contadordeletras(char palavra[], int n)
/* Checking if the character in the position n is the end of the string. If it is, it returns 0. 
If it is not, it returns 1 plus the number of characters in the string. */
{
    if (palavra[n] == '\0')
        return 0;
    else
        return 1 + contadordeletras(palavra, n + 1);
}

main()
{
/* Asking the user to input a string and then it is printing the number of characters in the string. */
    char palavra[100];

    printf("Digite uma palavra:\n");
        gets(palavra);
    printf("\nNumeros de caracteres da palavra digitada: %d", contadordeletras(palavra, 0));
}
