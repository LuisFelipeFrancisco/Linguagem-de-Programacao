#include <stdio.h>
#include <string.h>

int main()
{
/* A program that checks if a string is a palindrome. */
    char str1[20], str2[20];
    int i;

/* Flushing the input buffer. */
    fflush(stdin);

    printf("Palavra: ");
    gets(str1);

/* Reversing the string. */
    for (i = 0; i < strlen(str1); i++)
        str2[i] = str1[(strlen(str1) - 1 - i)];
    str2[i] = '\0';

/* Printing the reversed string. */
    printf("\n\nInversa: ");
    puts(str2);

/* Comparing the two strings and if they are the same it prints "Sao palindromos" */
    if (strcmp(str1, str2) == 0)
        printf("\n\nSao palindromos");
/* Printing "Nao sao palindromos" if the strings are not the same. */
    else
        printf("\n\nNao sao palindromos");
}
