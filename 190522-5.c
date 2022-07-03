#include <stdio.h>

float calculaS (int n)
{
	if (n==1)
		return 0.5;
	else return (float) (n*n+1)/(n+3)+calculaS(n-1) ;
	
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

printf ("Serie S: %.3f",calculaS(num));
	
}
