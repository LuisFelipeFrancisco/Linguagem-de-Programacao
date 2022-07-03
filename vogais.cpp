#include <stdio.h>
#include <string.h>
#include <ctype.h>
main ()
{
char str[] = "Esta e uma string de exemplo";
  char key[] = "aeiou";
  char * pch;
  printf ("Vogais em '%s': ",str);
  pch = strpbrk (str, key);
  while (pch != NULL)
  {
    printf ("%c " , *pch);
    pch = strpbrk (pch+1,key);
  }
  printf ("\n");

}

