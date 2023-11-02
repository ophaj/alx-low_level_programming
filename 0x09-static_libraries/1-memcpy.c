#include "main.h"
/**
 *_memcpy - This' a function that duplicates memory area
 *@dest: This is where memory is stored
 *@src: This is where the memory is copied
 *@n: This signifies the number of bytes
 *
 *Return: This returns the copied memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

		for (; r < i; r++)
		{
			dest[r] = src[r];
				n--;
		}
	return (dest);
}
