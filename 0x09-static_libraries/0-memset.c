#include "main.h"

/**
 * _memset -This's a program that fills a block of memory with specific value
 * @s: This is the starting address of the memory to be filled
 * @b: This is the desired value
 * @n: This represents the number of bytes to be changed
 *
 * Return: This will change array with new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (; n > 0; a++)

	{
		s[a] = b;
				n--;
	}
	return (s);

}
