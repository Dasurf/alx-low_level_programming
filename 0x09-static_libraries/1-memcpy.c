/**
 * _memcpy - This is a function that copies memory area
 *
 * @dest: A buffer where we will copy to
 * @src: This is what we are to copy
 * @n: number of bytes of @src
 *
 * Return: Always 0 (Success)
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
