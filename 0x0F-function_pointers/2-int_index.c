#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - A function that searches for an integer
 *
 * @array: pointer to array
 * @size: size of array
 * @cmp: pointer to function call to check index in array
 *       if it matches
 *
 * Return: Always 0 (Success)
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	bool y;

	if (array != NULL && size > 0 && cmp != NULL)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
		{
			y = cmp(array[i]);
			if (y == TRUE)
				return (i);
		}
	}

	return (-1);
}
