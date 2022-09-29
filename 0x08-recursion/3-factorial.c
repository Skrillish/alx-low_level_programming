#include "main.h"

/**
 * factorial - finds the factorial of an integer using recursion
 * @n: input integer
 * Return: factorial of the input integer or -1 if the number is less than 0
 */
int factorial(int n)
{
if (n == 1 || n == 0)
return (1);
else if (n < 0)
return (-1);
else
return (n * factorial(n - 1));
}
