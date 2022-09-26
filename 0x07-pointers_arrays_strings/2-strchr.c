#include "main.h"

/**
 * _strchr - searches for a character in a string
 * @s: string to search
 * @c: character to search for
 * Return: address that points to the first occurrence of
 * the character
 */
char *_strchr(char *s, char c)
{
int i = 0;

while (s[i] != '\0')
{
if (s[i] == c)
return (s + i);
i++;
}
if (s[i] == c)
return (s + i);

return ('\0');
}
