#include <stdlib.h>
#include "function_pointers.h"

/**
  *array_iterator - execute a function as parameter
  *@size: is the size of the array
  *@action: pointer to the function you need to use
  *@array: array in question
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
