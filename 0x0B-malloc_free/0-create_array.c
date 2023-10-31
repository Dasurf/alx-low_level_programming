#include <stdlib.h>

/**
 * create_array - This creates an array of chars and
 *                initializes it with a specific char.
 *
 * @size: The array size
 * @c: The char to initialize array with
 *
 * Return: array @a
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	if (size == 0)
		return (NULL);

	a = malloc(size * sizeof(char));

	if (a == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		a[i] = c;

	return (a);
}
