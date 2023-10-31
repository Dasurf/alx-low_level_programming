#include <stdlib.h>

/**
 * wordCount - get word count from string
 *             ignoring spaces
 *
 * @str: The string to count words present
 *
 * Return: Number of words
*/

int wordCount(char *str)
{
	int words = 0;

	while (*str != '\0')
	{
		/* ignore spaces */
		if (*str == ' ')
			str++;
		else
		{
			/* count words */
			while (*str != ' ' && *str != '\0')
				str++;
			words++;
		}
	}
	return (words);
}

/**
 * free_array - A function that frees arr[i]
 *
 * @arr: The array to free
 * @i: The array[i]
 *
 * Return: nothing
*/

void free_array(char **arr, int i)
{
	if (arr != NULL && i != 0)
	{
		while (i >= 0)
		{
			free(arr[i]);
			i--;
		}
		free(arr);
	}
}

/**
 * strtow - A function that splits a string to words
 *
 * @str: string to split.
 *
 * Return: NULL if it fails
*/

char **strtow(char *str)
{
	int i, s, j, str_l, word;
	char **string;

	if (str == NULL || *str == '\0')
		return (NULL);

	str_l = wordCount(str);
	/* This returns null if str_l == 0 or new == NULL */
	string = malloc((str_l + 1) * sizeof(char *));
	if (str_l == 0 || string == NULL)
		return (NULL);

	for (i = s = 0; i < str_l; i++)
	{
		for (word = s; str[word] != '\0'; word++)
		{
			if (str[word] == ' ')
				s++;

			if (str[word] != ' ' && (str[word + 1] == ' ' || str[word + 1] == '\0'))
			{
				string[i] = malloc((word - s + 2) * sizeof(char));
				if (string[i] == NULL)
				{
					free_array(string, i);
					return (NULL);
				}
				break;
			}
		}

		for (j = 0; s <= word; s++, j++)
			string[i][j] = str[s];
		string[i][j] = '\0';
	}
	string[i] = NULL;
	return (string);
}
