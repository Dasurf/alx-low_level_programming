#include "main.h"
#include <stdlib.h>

void *malloc_checked(unsigned int b)
{
	void *array;

	array = malloc(b);

	if (array == NULL)
	{
		exit(98);
	}

	return (array);
}
