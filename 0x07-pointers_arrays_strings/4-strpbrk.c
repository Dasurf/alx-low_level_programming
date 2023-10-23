/**
 * _strpbrk - This is a function that searches a string
 *            for any of a set of bytes.
 *
 * @s: A pointer to input string
 * @accept: A pointer to string
 *         we are searching for in @s
 *
 * Return: A pointer to the bytes in @s or
 *         NULL if no such byte is found
*/

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				return (s + i);
			j++;
		}
		i++;
	}
	return ('\0');
}
