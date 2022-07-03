#include <stdio.h>


float calculaS (int n)
{
	if (n==1)
		return 1;
	else return (float) 1/n +calculaS(n-1);
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

printf ("Serie S: %.2f",calculaS(num));
	
}

