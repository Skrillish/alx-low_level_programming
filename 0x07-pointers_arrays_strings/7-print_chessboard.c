#include "main.h"

/**
 * print_chessboard - prints out each character of a 2 dimensional array
 * @a: pointer to an array
 * Return: none
 */
void print_chessboard(char (*a)[8])
{
int i = 0;
int j = 0;

for (i = 0; a[i][j] != '\0'; i++)
{
for (j = 0; j < 8; j++)
{
_putchar(a[i][j]);
}
_putchar('\n');
}

}
