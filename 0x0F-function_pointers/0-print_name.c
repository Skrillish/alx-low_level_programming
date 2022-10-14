#include "function_pointers.h"

/**
 * print_name - prints out the name passed by calling
 * a function using the function pointer and passing it the
 * argument name
 * @name: name to printed
 * @f: function pointer
 */
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;
f(name);
}
