#include "main.h"

/**
 * print_triangle - function to print # in trangale shape
 *
 * @i : variable i
 * @j : variable j
 * @size : variable size
 */

void print_triangle(int size)
{
	int j;

	for (int i = 1; i  <= size; i++)
	{
		for (j = 1; j < size; j++)
		{
			_putchar(' ');
		}
		for (j = 1; j <= i; j++)
		{
			_putchar('#');
		}
		if (size <= 0)
		{
			_putchar('\n');
		}
		_putchar('\n');
	}
}
