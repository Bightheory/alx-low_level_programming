#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
  * main - main funct
  * @argc: param count
  * @argv: param poiter
  *Return: int
  */

int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	print
