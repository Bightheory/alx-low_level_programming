#include <stdio.h>

/**
 * main - main block
 * Description: Prints all possible combinations of two two-digit numbers
 * Return: Always 0(success)
 */

int main(void)
{
	int a, b;

	for (a = 0; a <= 98; a++)
	{
		for (num2 = num1 + 1; num2 <= 99; num2++)
		{
			putchar((num1 / 10) + '0');
			putchar((num1 % 10) + '0');
			putchar(' ');
			putchar((num2 / 10) + '0');
			putchar((num2 % 10) + '0');

			if (num1 == 98 && num2 == 99)
			{
				break;
			}
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
