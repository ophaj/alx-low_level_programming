#include "main.h"

/**
 * _isdigit - This will check for a digit (0 to 9)
 * @c: int to be checked
 * Return: This will return 1 if c is a digit, and 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
