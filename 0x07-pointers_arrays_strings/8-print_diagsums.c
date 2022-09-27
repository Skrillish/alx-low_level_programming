#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals in a 2d array
 * @a: pointer to a 2d array
 * @size: size of the array i.e size rows and size columns
 * Return: none
 */
void print_diagsums(int *a, int size)
{
int i, j;
int sum1 = 0;
int sum2 = 0;

for (i = 0; i < size; i++)
sum1 += *((a + i * size) + i);
i = 0;
for (j = size - 1; j >= 0; j--)
{
sum2 += *((a + i *size) + j);
i++;
}
printf("%i, %i\n", sum1, sum2);
}
