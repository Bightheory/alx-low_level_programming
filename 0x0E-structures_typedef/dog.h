#ifndef FILE_DOG
#define FILE_DOG

/**
  * struct dog - structure dog
  * @name: attribute pointer to char name's dog
  * @age: attribute float age dog
  * @owner: attribute pointer to char owner's dog
  */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_h;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);
#endif
