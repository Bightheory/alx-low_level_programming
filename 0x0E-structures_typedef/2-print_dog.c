#include <stdio.h>
#include "dog.h"


/**
  * print_dog - prints a struct dog
  * @d: pointer to struct dog
  * @name: pointer to char dog's name
  * @age: pointer to float dog's age
  * @owner: pointer to char owner's name
  * Return: nil if an element of d is NULL, nothing if d is NULL
  */

void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name != NULL && d->owner != NULL)
		{
			printf("Name: %s\n", d->name);
				printf("Age: %f\n", d->age);
			printf("Owner: %s\n", d->owner);
		}
		else
		{
			printf("(nil)\n");
		}
	}
}
