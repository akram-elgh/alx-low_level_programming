#include "main.h"

/**
 * _isdigit - fn for check a number through 0 to 9
 * @c: is a number
 * Return: always 0.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
