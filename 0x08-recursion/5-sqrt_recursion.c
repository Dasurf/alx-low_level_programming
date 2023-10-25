/**
 * _sqrt_recursion_block - A wrapper that does the recursion bit
 *
 * @n : input number
 * @min: minimum number you can guess
 * @max: maximum number you can guess
 *
 * Return: The square root of @n or -1
*/
int _sqrt_recursion_block(int n, int min, int max)
{
	int guess, squared_guess;

	guess = (min + max) / 2;
	squared_guess = guess * guess;

	if (squared_guess == n)
		return (guess);
	else if (min == max)
		return (-1);
	else if (squared_guess < n)
		return (_sqrt_recursion_block(n, guess + 1, max));
	else
		return (_sqrt_recursion_block(n, min, guess - 1));
}

/**
 * _sqrt_recursion - This a function that returns the natural
 *                   square root of a number
 *
 * @n: The input number
 *
 * Return: square root
*/
int _sqrt_recursion(int n)
{
	if (n == 1)
		return (1);
	else if (n == 0)
		return (0);
	else if (n < 0)
		return (-1);
	else
		return (_sqrt_recursion_block(n, 1, n));
}
