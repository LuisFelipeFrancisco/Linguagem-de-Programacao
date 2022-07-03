#include <stdio.h>

int som (int x, int y) // definição da função
{
	int result;									
	result = x+y;
	return result;		// retorno da função
}

int sub (int x, int y) // definição da função
{
	int result;
	result = x-y;
	return result;	 	// retorno da função
	
}

int mult (int x, int y) // definição da função
{
	int result;
	result = x*y;
	return result;		// retorno da função
}

int div (int x, int y) // definição da função
{
	int result;
	result = x/y;
	return result;		// retorno da função
}


main (){

int n1,n2, soma, subtracao, multipli, divisao;

printf("Digite o primeiro numero: ");
scanf ("%d", &n1);
printf("Digite o segundo numero: ");
scanf ("%d", &n2);

soma = som (n1, n2);					// chamado da função
printf("Soma: %d\n", soma);

subtracao = sub (n1, n2);
printf ("Subtracao: %d\n", subtracao); 	 // chamado da função

multipli = mult (n1, n2);
printf ("Multplicacao: %d\n", multipli);  	// chamado da função

divisao = div (n1, n2);
printf ("Divisao: %d\n", divisao);  		// chamado da função

	
}
