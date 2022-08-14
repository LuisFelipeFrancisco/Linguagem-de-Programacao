#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "apple";
    char *pch;
    
/* Looking for the character 'p' in the string "apple" and printing the location of the character. */
    printf("Looking for the 'p' character in \"%s\"...\n", str);
        pch = strchr(str, 'p');
    
    while (pch != NULL)
    {
/* Finding the location of the character 'p' in the string "apple" and printing the location of the
character. */
        printf("found at %d\n", pch - str + 1);
        pch = strchr(pch + 1, 'p');
    }
    return 0;
}
