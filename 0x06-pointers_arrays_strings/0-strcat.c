#include "main.h"

/**
  * _strcat - function appends two strings
  * @src: pointer to string
  * @dest: pointer to another string
  * Returns: dest
  */

char *_strcat(char *dest, char *src)
{
	int i,j;
	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}

	
