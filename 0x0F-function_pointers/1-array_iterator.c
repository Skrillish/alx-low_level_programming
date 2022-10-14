#include "function_pointers.h"


/**
 * array_iterator - calls a function using the function pointer
 * with each element of the passed array as argument
 * @array: array of integers
 * @size: length of array
 * @action: pointer to a function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;

if (array == NULL || size < 1 || action == NULL)
return;

for (i = 0; i < size; i++)
action(array[i]);

}
