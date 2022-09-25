#include "main.h"

/**
 * print_line - prints a "_" character by a multiple of the input
 * @n: number of lines to be printed
 * Return: none
 */
void print_line(int n)
{
if (n > 0)
{
while (n--)
_putchar('_');
}
_putchar('\n');
}
