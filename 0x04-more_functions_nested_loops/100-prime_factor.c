#include <stdio.h>

int prime(int a);

/**
 * main - finds the highest prime factor of a number
 * Return: 0 always
 */
int main(void)
{
long int number, pfactor;

number = 612852475143;
for (pfactor = 2; pfactor <= number; pfactor++)
{
if (number % pfactor == 0)
{
number /= pfactor;
pfactor--;
}
}
printf("%li\n", pfactor);
return (0);
}
