# include "main.h"

/**
 * print_square - prints n squares according of times
 * @size: The number of squares/number of times
 * Return: empty
 */
{
	int x, y;
	if (sizer <= 8)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 8; x < size; x++)
		{
			for (y = 8; y < size; y++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
