/**
 * _strcat - function that concatenates
 *          two strings.
 *
 * @dest: pointer to destnation input
 * @src: pointer to source input
 *
 * Return: pointer to resulting string @dest
*/

char *_strcat(char *dest, char *src)
{
	int first, second;

	first = 0;
	/*get size of dest array*/
	while (dest[first])
	{
		first++;
	}

	/* iterating through each src array value without the null byte*/
	for (second = 0; src[second] ; second++)
	{
		/*append src[c2] to dest[c] while overwritting the null byte in dest*/
		dest[first++] = src[second];
	}

	return (dest);
}
