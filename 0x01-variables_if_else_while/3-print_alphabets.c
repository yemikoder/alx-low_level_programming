#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - entry point
 *
 * alphabet: first operand
 *
 * Return:0
 *
 */

int main(void)
{
	char alphabet;

	alphabet = 'a';
	while (alphabet <= 'z')
	{
	putchar(alphabet);
	alphabet++;
	}
	alphabet = 'a';
	if (alphabet <= 'z')
	{
	alphabet = toupper(alphabet);
	putchar(alphabet);
	alphabet++;
	}
	putchar('\n');
	return (0);
}
