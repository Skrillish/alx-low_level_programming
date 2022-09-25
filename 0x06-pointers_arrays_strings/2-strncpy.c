#include "main.h"

/**
 * _strncpy - copy the first n characters of a string to another string
 * @dest: - destination string
 * @src: - source string to copy from
 * @n: - number of characters to copy from source string
 * Return: address to first string
 */
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;

while (src[i] != '\0' && i < n)
{
*(dest + i) = *(src + i);
i++;
}

while (i < n)
{
dest[i] = '\0';
i++;
}

return (dest);
}
