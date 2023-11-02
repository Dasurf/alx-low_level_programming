#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory space
 *                  for a programme
 * @b: size of the array
 *
 * Return: returns array @arr
*/

void *malloc_checked(unsigned int b)
{
	void *arr;

	if (b == 0)
	{
		return (NULL);
	}

	arr = malloc(b);

	if (arr == NULL)
	{
		exit(98);
	}

	return (arr);
}
