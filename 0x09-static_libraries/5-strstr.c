/**
 * _strstr - This is a function that locates a substring
 *
 * @haystack: An input string to search for matching substrings
 * @needle: The subtring to search for
 *
 * Return: A pointer to the beginning
 *         of the located substring
 *         or NULL if substring is not found
*/

char *_strstr(char *haystack, char *needle)
{
	char *a, *b;

	while (*haystack != '\0')
	{
		a = haystack;
		b = needle;
		while (*b != '\0' && *haystack == *b)
		{
			haystack++;
			b++;
		}
		if (!*b)
			return (a);
		haystack++;
	}
	return ('\0');
}
