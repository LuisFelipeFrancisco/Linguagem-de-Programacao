#include <stdio.h>
#include <string.h>

int main ()
{
  char str[] = "apple";
  char * pch;
  printf ("Looking for the 'p' character in \"%s\"...\n",str);
  pch=strchr(str,'p');
  while (pch!=NULL)
  {
    printf ("found at %d\n",pch-str+1);
    pch=strchr(pch+1,'p');
  }
  return 0;
}
