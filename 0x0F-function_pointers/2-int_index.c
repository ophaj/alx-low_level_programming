#include "function_pointers.h"

/**
* int_index - This return index place if comparison = true, else -1
* @array: The array
* @size: The size of elements in array
* @cmp: The pointer to func of one of the 3 in main
*
* Return: 0
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

		if (size > 0)
		{
			if (array != NULL && cmp != NULL)
			{
				while (i < size)
				{
					if (cmp(array[i]))
						return (i);

	i++;
			}
		}
	}
return (-1);
}
