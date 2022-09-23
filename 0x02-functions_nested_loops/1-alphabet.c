#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - prints out all alphabet in lowercase
 * Return: returns 0 after successful completion
 */
void print_alphabet(void)
{
int letter = 97;
while (letter < 123)
{
_putchar(letter);
letter++;
}
_putchar('\n');
}
