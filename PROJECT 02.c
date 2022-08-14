#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
/* The above code is a game of hangman. */

int main()
{
    char tampalavra, palavra[20], letra[20], espaco[20];
    int vida = 6, x, i, cont = 0;

    printf("±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±");
    printf("\n±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±J±±±O±±±G±±±O±±±D±±±A±±±F±±±O±±±R±±±C±±±A±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±\n");
    printf("±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±\n");
    printf("Palavra a ser adivinhada: ");
    gets(palavra);
    system("cls");

/* Creating a string of dashes that is the same length as the word to be guessed. */
    for (i = 0; i < strlen(palavra); i++)
        espaco[i] = '-';
    tampalavra = strlen(palavra);

/* This is the main loop of the game. It is the part that is executed every time the user guesses a letter. */
    while (vida > 0)
    {
        x = 0;
        printf("\n%s \n", espaco);
        printf("\nDIGITE UMA LETRA: ");
        gets(letra);

        for (i = 0; i < strlen(palavra); i++)
/* Checking if the letter the user guessed is in the word. */
        {
            if (letra[0] == palavra[i])
            {
                espaco[i] = palavra[i];
                cont++;
                x++;
            }
        }
        if (x == 0)
/* It decreases the number of lives by one and prints a message. If the number of lives reaches zero, it prints a message and ends the game. */
        {
            vida = vida - 1;

            if (vida == 0)
            {
                printf("\n\nVOCE FOI ENFORCADO!");
                printf("\nA PALAVRA ERA: %s", palavra);
                break;
            }
            else
                printf("\nVOCE ERROU! RESTAM %d VIDA(S)", vida);
        }
        else
        {
/* Checking if the number of letters guessed is equal to the length of the word. If it is, it prints a message and ends the game. */
            if (cont == tampalavra)
            {
                printf("\n\nVOCE GANHOU!");
                printf("\nA PALAVRA ERA: %s", palavra);
                break;
            }
/* Printing a message if the letter guessed is correct. */
            else
            {
                printf("\nLETRA CORRETA!");
            }
        }
    }
    printf("\n\n");
    system("pause");
    return 0;
}
