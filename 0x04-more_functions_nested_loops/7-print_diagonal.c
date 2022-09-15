#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: number of times \ should be printed
 */

void print_diagonal(int n)
{
	int i = 1;

	while (i <= n)
	{
		_putchar(92);
		i++;
	}
	_putchar('\n');

	if (n <= 0)
	{
		_putchar('\n');
	}
}
