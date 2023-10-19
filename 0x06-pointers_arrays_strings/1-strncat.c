/**
 * _strncat - a function that concatenates two strings.
 *
 * @dest: pointer to destination input
 * @src: pointer to source input
 * @n: most number of bytes from @src
 *
 * Return: @dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int str, i;

	str = 0;

	/*finding size of the dest array*/
	while (dest[str])
	{
		str++;
	}

	/**
	 * src doesn't need to be null terminated
	 * if it contains n or more bytes
	 */
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[str + i] = src[i];
	}
	/*null terminate dest*/
	dest[str + i] = '\0';

	return (dest);
}
