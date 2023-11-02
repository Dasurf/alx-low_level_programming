#include <stdlib.h>

/**
 * string_nconcat - A function that concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 * @n: bytes of s2 to add to s1 to make a new string
 *
 * Return: A new string followed by the first @n bytes
 *         of string 2 @s2 or NULL
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int t1, t2, i, j;
	char *str;

	/* treat NULL as empty string as specified in the requirements */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	t1 = 0;
	t2 = 0;
	/* To get the length of both s1 & s2 respectively */
	while (s1[t1] != '\0')
		t1++;
	while (s2[t2] != '\0')
		t2++;

	/* To set n to length of s2 */
	if (n >= t2)
		n = t2;

	str = (char *) malloc((t1 + n + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);

	/* adds s1 to str */
	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];
	/* add s2 n bytes to str */
	for (j = 0; j < n && s2[j] != '\0'; j++)
	{
		str[i] = s2[j];
		i++;
	}
	str[i] = '\0';

	return (str);
}
