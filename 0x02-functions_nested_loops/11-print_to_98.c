#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints from the specified number to 98 
 * @n: integer to start printing from
 * Return: none
 */
void print_to_98(int n)
{
if (n < 98)
{
while (n < 98)
{
printf("%d, ", n);
n++;
}
}
else
{
while (n > 98)
{
printf("%d, ", n);
n--;
}
}
printf("%d\n", 98);

}
