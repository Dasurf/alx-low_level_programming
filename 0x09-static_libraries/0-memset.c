/**
 * _memset - This is a function that fills the
 *         memory with a constant byte
 *
 * @s: The input pointer to char type that
 *    represents the pointer to the
 *    block of memory to fill
 * @b: input variable of char type
 *    represents the character to
 *    fill s
 * @n: The unsigned int variable the number
 *     of bytes to be filled
 *
 * Return: A pointer to the filled memory
 *         area in s
*/

char *_memset(char *s, char b, unsigned int n)
{
	/**
	 * This declares an unsigned int
	 * because we are storing a value
     * that will always be
	 * non-negative (zero or positive)
	*/
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
