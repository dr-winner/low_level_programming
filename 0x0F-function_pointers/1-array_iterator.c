#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - this function prints each array elem on a newl
 * @array: the array
 * @size: number of elem to print
 * @action: the pointer to print in regular or hex
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array == NULL || action == NULL)
		return;
	for (x = 0; x < size; x++)
	{
		action(array[x]);
	}
}
