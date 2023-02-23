# include "main.h"

/**
 * _isdigit - check if a number is a digit
 * @x: The number is checked
 * Return: 1 for the character that would be a digit or 0 for any else
 */

int _isdigit(int x)
{
	if (x >= 48 && x <= 57)
	{
		return (x);
	}
	return (0);
}
