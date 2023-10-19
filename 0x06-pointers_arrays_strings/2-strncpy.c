/**
 * _strncpy - This is a function that copies a string.
 *
 * @dest: is a pointer to destination input buffer
 * @src: is apointer to source input buffer
 * @n: bytes of @src
 *
 * Return: @dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/**
	 * iterating through the src array
	 * if there is no null byte
	 * among the first n bytes of source
	 * then the string placed in dest will not be
	 * null terminated
	*/
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	/**
	 * if length of source < n
	 * write additional nullbytes to dest to
	 * ensure a total of n bytes is written
	*/
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
	}
