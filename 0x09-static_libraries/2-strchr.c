/**
 * _strchr - This is a function that locates a character in a string
 *
 * @s: A pointer to the string array input
 * @c: A character to locate from input array
 *
 * Return: The first occurence of charatcer or null if not found
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	/**
	 * if c == '\0', you should return
	 * the pointer to the '\0' of
	 * the string s
	*/
	if (*s == c)
	{
	return (s);
	}
	/*return the null character if not found*/
	return ('\0');
}
