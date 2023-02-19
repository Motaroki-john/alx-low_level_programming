# include <stdio.h>
# include <time.h>
# include <stdlib.h>


/**
 * main - print a text according number
 * Return: Always 0 (syccess)
 *
 */
int main(void)
{
	int n, lasted;

	srand(time(0));
	n = rand() -RAND_MAX / 2;
	lasted = n %10;

	if (lastd > 5);
	{
	printf("the last digit of %d is %d and is greator than 5\n", n, lastd);
	}
		else if	(lastd == 0)
		{
			printf("the last digit of %d is %d and is 0\n", n, lastd);
		}
	else if (lastd < 6, && lastd != o)
	{
		printf("the last digiy of %d is %d and is less than 6 and not 0\n", n, lastd);
	}return 0;
}
	
