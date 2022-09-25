#include "main.h"

/**
 * print_triangle - display a triangle
 * @n: size of triangle
 * Return: none
 */
void print_triangle(int n)
{
int i, j, k;
if (n > 0)
{
for (i = 1; i <= n; i++)
{
for (j = 0; j < n - i; j++)
_putchar(' ');
for (k = 0; k < i; k++)
_putchar('#');
_putchar('\n');
}
}
else
_putchar('\n');
}
