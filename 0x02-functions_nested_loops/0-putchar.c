#include "main.h"

/**
 * main - Prints -putchar, followed by a new line.
 *
 * Return: Always 0(success)
 */
int putchar();

int main(void)
{
	char *putc[] = "_putchar";

	while (*putc)
	{
		putchar(*putc);
	}

	putchar('\n');
	return (0);
}
