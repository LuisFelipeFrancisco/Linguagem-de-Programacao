#include <stdio.h>
#include <conio.h>

int main()
{
/* Printing "Hello world" at the 10th column and 5th row. */
    gotoxy(10, 5);
    
    printf("Hello world");
        getch();
    return 0;
}
