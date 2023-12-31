/**
 * cap_string - This a function that capitalizes
 *              all the words of a string
 *
 * @s: This is a pointer to char input array
 *
 * Return: @s
*/

char *cap_string(char *s)
{
	int i = 0;

	/*iterating through an array of values*/
	while (s[i] != '\0')
	{
		/*checking for any lowercase letters*/
		if (s[i] >= 97 && s[i] <= 122)
		{
			/**
			 * if there's a null character then
			 * change its value to capital
			*/
			if (i == 0)
			{
				s[i] -= 32;
			}
			/**
			 * if there's any character matching the below before any small
			 * letter then we change that value to a capital letter.
			*/
			if (s[i - 1] == 32 || s[i - 1] == 9 || s[i - 1] == 10 ||
				s[i - 1] == 44 || s[i - 1] == 59 || s[i - 1] == 46 ||
				s[i - 1] == 33 || s[i - 1] == 63 || s[i - 1] == 34 ||
				s[i - 1] == 40 || s[i - 1] == 41 || s[i - 1] == 123 ||
				s[i - 1] == 124)
			{
				s[i] -= 32;
			}
		}
		i++;
	}
	return (s);
}
