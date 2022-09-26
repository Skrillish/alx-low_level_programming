#include "main.h"


/**
 * _memset - fills the first "n" characters of s with "b"
 * @s: pointer to the string
 * @b: character to replace with
 * @n: number of characters to replace
 * Return: address of s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i; /* has to be same type as n since you are comparing */
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
