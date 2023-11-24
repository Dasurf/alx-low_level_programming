#include "main.h"

/**
 * to_int - func that converts chars to integer
 *
 * @c: char to convert
 *
 * Return: converted integer
*/
unsigned int to_int(char c)
{
	return ((unsigned int) c - '0');
}

/**
 * str_len - a func that gets the length of a string
 *
 * @str: string input
 *
 * Return: string length
*/
unsigned int str_len(const char *str)
{
	unsigned int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}

/**
 * binary_to_uint - a function that converts a binary number
 *                  to an unsigned int
 *
 * @b: string that contains 0 and 1 characters
 *
 * Return: the number converted or 0
 *         if @b contains a character
 *         that is not 0 or 1 or when
 *         @b is null
*/
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int result = 0,  num = 0, base2 = 1;

	if (b == NULL)
		return (0);

	#ifdef DEBUG
	printf("String is %s, and length is %u.\n", b, str_len(b));
	#endif

	for (i = str_len(b) - 1; i >= 0; i--)
	{
		num = to_int(b[i]);

		#ifdef DEBUG
		printf("Number is %u, i is %i and base is %u.\n\n", num, i, base2);
		#endif

		if (num != 0 && num != 1)
			return (0);

		result += num * base2;
		base2 *= 2;

		#ifdef DEBUG
		printf("Result is %u.\n", result);
		#endif
	}

	return (result);

}
