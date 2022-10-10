#include "dog.h"

/**
  * init_dog - initializes a variable of type struct dog
  * @d: pointer to struct dog
  * @name: pointer to char dog's name
  * @age: dog's age
  * @owner: pointer to char owner's name
  * Return: No
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
