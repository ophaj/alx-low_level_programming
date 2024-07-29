#include "main.h"

/**
 * _isupper - This checks for lowercase characters
 * @c: THis is the character to be inspected
 * Return: 1 for uppercase characters or 0 for lowercase characters
 */

int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
return (0);
}
