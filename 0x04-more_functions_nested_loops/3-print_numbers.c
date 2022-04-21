#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_numbers - this function prints numbers 0 - 9
 *
 * @i: variable i
 * Return: 0
 */

void print_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
	_putchar(i + '0');
	i++;
	}
	_putchar('\n');
}
