/**
 * _strspn - This is a function that gets the
 *           length of a prexif substring
 *
 * @s: A pointer to a string input
 * @accept: A substring pre-fix to look for
 *
 * Return: Returns the number of bytes in the initial segment
*/

unsigned int _strspn(char *s, char *accept)
{
	int i, j, k;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		k = 1;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				k = 0;
				break;
			}
			j++;
		}
		if (k == 1)
			break;
		i++;
	}

	return (i);
}
