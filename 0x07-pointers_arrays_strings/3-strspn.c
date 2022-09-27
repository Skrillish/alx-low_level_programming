#include "main.h"

/**
 * _strspn - returns the number of bytes in which the prefix
 * of the first string is similar to the second string
 * @s: first string
 * @accept: second string
 * Return: number of bytes in s that are also in accept
 */
unsigned int _strspn(char *s, char *accept)
{
int i, j;
int k = 0;

for (i = 0; s[i] != ' ' && s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
k += 1;
}
}

return (k);
}
