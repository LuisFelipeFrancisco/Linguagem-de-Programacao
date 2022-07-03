#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main ()
{
	int n, num,  vet[100], inicio=0, meio, fim=99, qtdjog=0, qtdmaq=0, i, acertou=0;
	char resp[10];
	
	srand (time(NULL));
	num =(rand()%99)+1;
		
	printf ("SEU TURNO DE ADIVINHAR\n\n");
	printf("Pensando em um numero entre 1 e 100 ...\n\n");
	
	do {
		qtdjog++;
		printf("\nTentativa de numero: %d \n", qtdjog);
		printf("Digite um numero de 1 a 100: \n");
		scanf("%d", &n);
			if (n>num)
				printf("\nNumero escolhido e menor que %d\n", n);
			else if (n<num)
				printf("\nNumero escolhido e maior que %d\n", n);
		}
	while (num != n);
		printf("\nVoce acertou!!!\nNumero escolhido foi: %d\nForam feitas %d tentativa(s)\n\n", num, qtdjog);
	
	for (i=0; i<100; i++)
		vet[i]=i+1;
		
		system("pause");
		system("cls");
		
	printf ("TURNO DA MAQUINA ADIVINHAR\n\n");
	printf("Pense em um numero entre 1 e 100 ... \n");
		
	do
	{
		meio=(fim+inicio)/2;
		qtdmaq++;
		printf("O numero pensado seria maior, menor ou igual a: %d\n", vet[meio]);
		scanf ("%s", resp);
			if (strcmp(resp, "igual")==0)
				acertou = 1;
			else if (strcmp(resp, "maior")==0)
				inicio=meio+1;
			else if (strcmp(resp, "menor")==0)
				fim=meio-1;
	}
	while (!acertou);
		printf("\nO numero pensado foi %d\nForam feitas %d tentativa(s)\n\n", vet[meio],qtdmaq);
		
	printf("Numero de tentativas do jogardor: %d\nNumero de tentativas da maquina: %d\n", qtdjog, qtdmaq);
	
	if (qtdjog<qtdmaq)
		printf("\nJogador venceu essa partida!");
	else if (qtdjog>qtdmaq)
		printf("\nMaquina venceu essa partida!");
	else 
		printf("\nHouve um empate!");

}
