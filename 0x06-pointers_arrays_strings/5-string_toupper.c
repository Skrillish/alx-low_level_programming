#include "main.h"

/**
 * string_toupper - converts every letter of the string to uppercase
 * @str: string input
 * Return: address to the string
 */
char *string_toupper(char *str)
{
int i = 0;

while (str[i] != '\0')
{

if (str[i] > 96 && str[i] < 123)
str[i] = str[i] - 32;

i++;
}

return (str);
}
