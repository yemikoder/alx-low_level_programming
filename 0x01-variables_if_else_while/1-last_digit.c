#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 *
 * n: first operand
 * last_digit: second operand
 *
 */

int main(void)
{
	int n;
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;
	/* your code goes there */
	if (n > 5)
	{
		printf("Last digit of %d\n is %d\n and is greater than 5", n, l);
	}
	else if (n == 0)
	{
		printf("Last digit of %d\n is %d\n and is 0", n, l);
	}
	else if (n < 6 && n != 0)
	{
		printf("Last digit of %d\n is %d\n and is less than 6 and not 0", n, l);
	}
	return (0);
}
