#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This program demonstrates the usage of pointers to access and modify variables.
 * It sets a value through a pointer to achieve a specific output.
 *
 * Return: Always 0 (indicating success)
 */
int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;

	/**
	 * Write your line of code here...
	 * Remember:
	 * - You are not allowed to use 'a'
	 * - You are not allowed to modify 'p'
	 * - Only one statement
	 * - You are not allowed to code anything else than this line of code
	 */
	p[5] = 98;
	/*...the above line assigns 98 to p[5] */

/* ...so that this prints 98\n */
	printf("a[2] = %d\n", a[2]);
	return (0);
}
