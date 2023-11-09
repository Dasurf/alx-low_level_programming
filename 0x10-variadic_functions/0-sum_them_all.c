#include "variadic_functions.h"

/**
 * sum_them_all - A function that takes variable
 *                  number of integer arguments
 *                  and sums them up
 *
 * @n: a constant variable that holds the number
 *     of arguments
 *
 * Return: returns @sum of all integer arguments
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;

	va_start(args, n);

	if (n == 0)
	{
		return (sum);
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			sum += va_arg(args, int);
		}
	}
	return (sum);
}
