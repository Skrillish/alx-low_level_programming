#include "main.h"

/**
 * print_diagonal - prints a diagonal line (input) long
 * @n: number of times to print character "\"
 * Return: none
 */
void print_diagonal(int n)
{
int i;
int d;
if (n > 0)
{
for (i = 0; i < n; i++)
{
for (d = 0; d < i; d++)
_putchar(' ');
_putchar(92);
_putchar('\n');
}
}
else
_putchar('\n');
}
