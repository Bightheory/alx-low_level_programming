#include "main.h"

/**
  * _memcpy - copies bytes from one memory area to another
  * @n: bytes of the memory
  * @src: memory to be copied from
  * @dest: memory to be copied to
  * Return: dest
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	/*Delacring WHILE*/
	while (i < n)
	{
		*(dest + i) = *(src + i); /*add 1 position dest and src*/
		i++;
	}
	/*END WHILE*/

	return (dest);
}
