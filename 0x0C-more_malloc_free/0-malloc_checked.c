#include "main.h"
#include <stdlib.h>

/**
 * @malloc_checked: function that allocates memory space
 * 					for a programme
 * 
 * @b: size of the array
 * @array: the array created
 * 
 * Return: returns address in memory of the array created
*/

void *malloc_checked(unsigned int b)
{
	void *array;

	if (b == 0)
	{
		return (NULL);
	}

	array = malloc(b);

	if (array == NULL)
	{
		exit(98);
	}

	return (array);
}
