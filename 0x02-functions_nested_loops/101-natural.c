#include <stdio.h>

/**
 * main - print all the sum of the multiples of 3 or 5 upto 1024
 * Return: Always (success)
 */
int main(void)
{
	int i, z = 0;

	while(i < 1024)
	{
		if ((i % 3 == 0) || (1 % 5 == 0))
		{
			z += i;
		}
		i++;
	}
	printf("%\n", z);
	return 0;
}

