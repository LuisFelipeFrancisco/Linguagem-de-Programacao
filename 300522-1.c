#include <stdio.h>

float serie (int n)
{
	if (n==1)
		return 1;
	else if (n%2 == 0)
		return (float) -1/n + serie (n-1);
	else return (float) 1/n + serie (n-1);
	
}

main ()
{
	int num;
	do 
	{
		printf("Numero: \n");
		scanf ("%d", &num);
	}
while (num<1);

printf ("Serie S: %.3f",serie(num));
	
}
