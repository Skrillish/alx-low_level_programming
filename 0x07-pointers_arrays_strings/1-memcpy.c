#include "main.h"


/**
 * _memcpy - copies the first n bytes from a source array to a
 * destination array
 * @dest: destination array
 * @src: source array
 * @n: number of bytes to copy
 * Return: address to destination array
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
dest[i] = src[i];
if (src[i] == '\0')
break;
}

return (dest);
}
