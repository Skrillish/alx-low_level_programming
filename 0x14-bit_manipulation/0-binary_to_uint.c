#include "main.h"


/**
 * binary_to_uint - converts a binary number to decimal
 * and return the value
 * @b: pointer to the string of numbers
 * Return: unsigned integer equivalent of binary number
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int len, i, result;

if (b == NULL)
return (0);

len = strlen(b);

result = 0;
for (i = 0; len > 0; len--, i++)
{
if (b[len - 1] == '0')
result += 0;
else if (b[len - 1] == '1')
result += npower(2, i);
else
return (0);
}

return (result);
}


/**
 * npower - base to power
 * @base: base
 * @p: power to raise base to
 * Return: result
 */
unsigned int npower(unsigned int base, unsigned int p)
{
unsigned int i;
unsigned int result = 1;

for (i = 0; i < p; i++)
result *= base;

return (result);
}
