#include <stdio.h>
#include <string.h>
#include <ctype.h>
/* Finding the vowels in a string. */

main()
{
/* Declaring a string. */
    char str[] = "Esta e uma string de exemplo";
/* Declaring a string. */
    char key[] = "aeiou";
/* Declaring a pointer to a character. */
    char *pch;
    
    printf("Vogais em '%s': ", str);
/* Assigning the value of the first occurrence of a vowel in the string to the pointer `pch`. */
        pch = strpbrk(str, key);
/* Printing the vowels in the string. */
    while (pch != NULL)
    {
        printf("%c ", *pch);
        pch = strpbrk(pch + 1, key);
    }
    printf("\n");
}
