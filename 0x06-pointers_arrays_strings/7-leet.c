/**
 * leet - This is a function that encodes a string into 1337
 *
 * @s: a string input
 *
 * Return: @s
*/

char *leet(char *s)
{
	int i, e = 0;
	int strl[] = {97, 101, 111, 116, 108};
	int upperLet[] = {65, 69, 79, 84, 76};
	int n[] = {52, 51, 48, 55, 49};

	/*iterate values in array s*/
	while (s[e] != '\0')
	{
		/**
		 * loop through array value five times
		 * to check if the value ==
		 * any small letter in array strl or
		 * upper letter in array upperLet and if it is then
		 * replace it with the value in array n
		*/
		for (i = 0; i < 5; i++)
		{
			if (s[e] == strl[i] || s[e] == upperLet[i])
			{
				s[e] = n[i];
				break;
			}
		}
		e++;
	}
	return (s);
}
