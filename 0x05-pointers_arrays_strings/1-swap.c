#include "main.h"

/**
  * swap_int - swaps the values of two integers
  * @a: integer one
  * @b: integer two
  */

void swap_int(int *a, int *b)
{
	int a;
	int b;

	a = 98;
	b = 42;

	int tmp = *a;
	*a = *b;
	*b = tmp;
}
