#include <stdlib.h>

/**
 * _strdup - This is a function that duplicates a string
 *
 * @str: An input string to duplicate
 *
 * Return: NULL if str == NULL
 *         @str
*/

char *_strdup(char *str)
{
	int i = 0, j = 0;
	char *s;

	if (str == NULL)
		return (NULL);

	while (str[j] != '\0')
		j++;

	s = malloc((1 + j) * sizeof(char));
	if (s == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		s[i] = str[i];
		i++;
	}

	return (s);
}
