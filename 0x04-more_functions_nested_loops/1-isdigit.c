#include "main.h"

/**
 *  _isdigit - This checks for a digit from 0 through 9
 *  @c: This is the character to be inspected
 *  Return: 0 for other characters or 1 for digits
 */

int  _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
return (0);
}
