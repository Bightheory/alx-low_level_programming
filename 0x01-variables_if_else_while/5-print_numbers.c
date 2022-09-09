#include <stdio>

/**
 * main - Entry point
 *
 * Return: Always (success)
 */
int main(void)
{
	int a;

	if( a = 0 )
	{
		printf("%d \n", a);
	}
	else if( a <= 10 )
	{
		printf("%d \n", a, a++);
	}
	return (0);
}
