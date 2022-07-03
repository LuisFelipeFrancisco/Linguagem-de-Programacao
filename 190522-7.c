#include <stdio.h>

int fibo (int n)
{
	if ((n==1) || (n==2)) // 1 = 1 | 1 + 1 = 1
		return 1;
	else return fibo(n-2) + fibo(n-1); // n-x + n-1 || 
	
}

main ()
{
	int x, i;
	do {	printf("Qtd Termos: \n");
			scanf ("%d", &x);
		} while (x<1);
			
			for (i=1;i<=x;i++)
			printf("%d ", fibo(i));
		
}
