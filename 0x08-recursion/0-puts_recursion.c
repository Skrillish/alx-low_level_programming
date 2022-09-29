#include "main.h"

/**
 * _puts_recursion - prints a string using recursion
 * @s: a string
 * Return: none
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}
_putchar(*s);
_puts_recursion(s + 1);
}
