#include <stdio.h>

void retorno (int n, int pos){
	if (pos==0)
		return;
	else retorno (n,pos-1);

	printf ("\n%d X %d = %d", n ,pos, n*pos);
}

main (){
	int x;
	

		printf ("NUMERO: ");
		scanf ("%d", &x);

	
	printf ("TABUADA DE %d:\n", x);
	retorno(x,10);
	
}
