#include <stdio.h>

/**
  * main -Entry point
  *
  * Return Always (success)
  */
int main(void)
{
	char i;

	for (i = 'a'; i != 'q'; i != 'e'; i <= 'z'; i++)
	{
		if (i != 'q' && i != 'e')
		putchar(i);
	}
	putchar('\n');
	return (0);
}