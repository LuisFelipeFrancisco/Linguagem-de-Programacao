#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>

int main(){
char tampalavra,palavra[20],letra[20],espaco[20];
int vida=6,x,i,cont=0;

printf("±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±");
printf("\n±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±J±±±O±±±G±±±O±±±D±±±A±±±F±±±O±±±R±±±C±±±A±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±\n");
printf("±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±\n");
printf("Palavra a ser adivinhada: ");
gets(palavra);
system("cls");

for(i=0;i<strlen(palavra);i++)
espaco[i]='-';
tampalavra=strlen(palavra);

while(vida>0){
x=0;
printf("\n%s \n",espaco);
printf("\nDIGITE UMA LETRA: ");
gets(letra);

for(i=0;i<strlen(palavra);i++){
if(letra[0]==palavra[i]){
espaco[i]=palavra[i];
cont++;
x++;
}
}
if(x==0){
vida=vida-1;

if(vida==0){
printf("\n\nVOCE FOI ENFORCADO!");
printf("\nA PALAVRA ERA: %s",palavra);
break;
}
else
printf("\nVOCE ERROU! RESTAM %d VIDA(S)",vida); 
}
else{
if(cont==tampalavra){
printf("\n\nVOCE GANHOU!");
printf("\nA PALAVRA ERA: %s",palavra);
break;
}
else{
printf("\nLETRA CORRETA!");
}
}
} 
printf("\n\n");
system("pause");
return 0; 
}
