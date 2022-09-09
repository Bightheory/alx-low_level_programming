#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always (success)
 */

int main(void)
{
	int i;
	char j;

	for (i = 0; num < 16; i++)
	{
		putchar((i % 10) + '0');
	}

	for (j = 'a'; j <= 'f'; j++)
	{
		putchar(j);
	}
	putchar('\n');

	return (0);
}
