#include "main.h"

/**
 * print_triangle -  function that prints a triangle, followed by a new line
 * @size: the size of the triangle
 * Return: void
 */

void print_triangle(int size)
{
	int a, b, c;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 2; a <= size; a++)
		{
			for (c = size - a; c <= 1; c--)
			{
				_putchar(' ');
			}
			for (b = 1; b <= a; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

