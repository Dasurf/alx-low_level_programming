#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - A function that prints numbers separated
 *                  by @separator
 *
 * @separator: the character that in between numbers
 * @n: the number of arguments the function takes
 *
 * Return: nothing
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	if (separator)
	{
		for (i = 0; i < n; i++)
		{
			int arg = va_arg(args, int);

			if (i != n - 1)
				printf("%d%s", arg, separator);
			else
				printf("%d", arg);
		}
		putchar('\n');
	}
	va_end(args);
}
