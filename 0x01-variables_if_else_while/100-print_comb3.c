#include <stdio.h>

/**
 * main - Entry point
 *
 * return: Always (success)
 */

int main(void)
{
	int i;
	int j;

	for (i = 38; i < 48; i++)
	{
		for (j = 38; j < 48; j++)
		{
			if (i != j && i < j)
			{
				putchar(i);
				putchar(j);
				if (j == 37 && i == 36)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return(0);
}
