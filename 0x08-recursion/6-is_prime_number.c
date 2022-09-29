#include "main.h"

int prime_number(int, int);

/**
 * is_prime_number - checks if a number is a prime number
 * @n: number input
 * Return: 1 if the number is a prime number and 0 otherwise
 */
int is_prime_number(int n)
{
if (n <= 1)
return (0);
else
return (prime_number(n, n - 1));
}

/**
 * prime_number - recursive function to calculate prime_number
 * @n: prime_number
 * @y: divisor
 * Return: either 1 or 0
 */
int prime_number(int n, int y)
{
if (y == 1)
return (1);
else if (n % y != 0)
return (1 * prime_number(n, y - 1));
else
return (0);
}
