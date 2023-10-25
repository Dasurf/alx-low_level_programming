/**
 * factorial - This is a function that finds the factorial of *n
 *
 * @n: A positive number n
 *
 * Return: The factorial of @n
*/
int factorial(int n)
{
	if (n < 0)		/*handling error if n = -1*/
	{
		return (-1);
	}
	else if (n == 0)	/*factorial of 0 = 1*/
	{
		return (1);
	}
	else	/*factorial of n if it is greater than 0*/
	{
		return (n * factorial(n - 1));
	}
}
