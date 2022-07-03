#include <stdio.h>
#include <stdlib.h>

int potencia (int base, int expoente)
{
	int result, aux;
		if(expoente == 0)
		printf ("\n%d elevado a %d = 1\n",base, expoente);
	else 
	{
		result = 1;
		aux = 0;
		while (aux != expoente)
		{
			result *= base;
			aux++;
		}
		printf ("\n%d elevado a %d = %d\n",base, expoente,result);
	}		
return 0;
}

main ()
{
	int a,b, res;
	printf("Digite a base:\n");
	scanf("%d", &a);
	printf ("Digite o expoente:\n");
	scanf("%d", &b);
	res = potencia (a,b);

system("pause");	
}
