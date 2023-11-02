#include <stdlib.h>

/**
 * _memset - fills memory with a constant byte
 *
 * @s: input pointer that represents memory
 *     block to fill
 * @c: characters to fill
 * @num: number of bytes to be filled
 *
 * Return: pointer to the filled memory area
*/

char *_memset(char *s, char c, unsigned int num)
{
	unsigned int i;

	for (i = 0; i < num; i++)
		s[i] = c;
	return (s);
}

/**
 * _calloc - function that allocates
 *           memory for an array using malloc
 *
 *           It is basically the equivalent to
 *           malloc followed by memset
 *
 * @nmemb: size of array
 * @size: size of each element
 *
 * Return: pointer with new allocated memory
 *         or NULL if it fails
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);

	_memset(arr, 0, nmemb * size);

	return (arr);
}
