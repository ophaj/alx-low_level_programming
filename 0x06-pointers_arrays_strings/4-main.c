#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints an array of integers
 * @a: pointer to the array
 * @n: Number of elements in the array
 *
 * This function prints each element of the array "a", seperated by commas,
 * followed  by a newline character.
  */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (i != 0)
	{
		printf(", ");
	}
	printf("%d", a[i]);
	i++;
	}
	printf("\n");
}
/**
 * main - Entry point of the program
 *
 * This function demonstrates the usage of the "print_array" function
 * and "reverse_array" function.
 *
 * Return: Always 0 (indicating success)
 */
int main(void)
{
	int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337};

	print_array(a, sizeof(a) / sizeof(int));
	reverse_array(a, sizeof(a) / sizeof(int));
	print_array(a, sizeof(a) / sizeof(int));
	return (0);
}
