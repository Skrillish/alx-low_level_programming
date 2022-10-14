#include "variadic_functions.h"


/**
 * print_strings - prints out all strings passed into the function
 * @separator: - separates each string
 * @n: number of string arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *str;
va_list args;

va_start(args, n);

for (i = 0; i < n; i++)
{
str = va_arg(args, char *);

if (str == NULL)
printf("(nil)");
else
printf("%s", str);

if (i < n - 1 && separator)
printf("%s", separator);
}

printf("\n");
va_end(args);
}
