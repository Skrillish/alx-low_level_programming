#include "main.h"

/**
 * print_array - prints out all elements of the array
 * @a: array of integers
 * @n: length of the array
 * Return: none
 */
void print_array(int *a, int n)
{
if (n > 0)
{
int i;
printf("%d", a[0]);
for (i = 1; i < n; i++)
printf(", %d", a[i]);
}
printf("\n");
}
