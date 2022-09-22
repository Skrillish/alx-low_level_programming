#include "main.h"

/**
 * print_alphabet_x10 - prints all lowercase alphabet 10 times
 * Return: void
 */
void print_alphabet_x10(void)
{
int letter, i;
i = 0;
while (i < 10)
{
letter = 97;
while (letter < 123)
{
_putchar(letter);
letter++;
}
_putchar('\n');
i++;
}
}
