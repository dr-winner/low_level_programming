#include "main.h"
/**
 * swap_int - this function swaps the values of two integers
 * @a: the swap integer
 * @b: the swap integer
 */
void swap_int(int *a, int *b)
{
	int myInt;

	myInt = *a;
	*a = *b;
	*b = myInt;
}
