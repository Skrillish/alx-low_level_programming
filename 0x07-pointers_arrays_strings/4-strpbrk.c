#include "main.h"

/**
 * _strpbrk - returns a pointer to the first occurence
 * of a character common to array s and array accept
 * @s: first array
 * @accept: second array
 * Return: pointer to the first occurence of a common character
 * in s and accept
 */
char *_strpbrk(char *s, char *accept)
{
int i, j;

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
return (s + i);
}
}
return ('\0');
}
