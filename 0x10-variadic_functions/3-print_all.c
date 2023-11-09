#include "variadic_functions.h"

/**
 * printChar - print a char
 *
 * @arg: A list of arguments pointing
 *      to the character to be printed
 *
 * Return: nothing
*/

void printChar(va_list arg)
{
	char c = va_arg(arg, int);

	printf("%c", c);
}

/**
 * printInt - print an integer
 *
 * @arg: A list of arguments pointing
 *      to the character to be printed
 *
 * Return: nothing
*/

void printInt(va_list arg)
{
	int n = va_arg(arg, int);

	printf("%d", n);
}

/**
 * printFloat - print a float
 *
 * @arg: A list of argument pointing
 *      to the character to be printed
 *
 * Return: nothing
*/

void printFloat(va_list arg)
{
	float n = va_arg(arg, double);

	printf("%f", n);
}

/**
 * printString - prints a string
 *
 * @arg: A list of arguments pointing
 *      to the character to be printed
 *
 * Return: nothing
*/

void printString(va_list arg)
{
	char *str = va_arg(arg, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 * print_all - A function that prints anything
 *
 * @format: A string of character representing
 *          the argument types
 *
 * Description: If any argument not of type char,
 *              int, float or char * is ignored
 *
 * Return: nothing
*/

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	char *separator = "";
	funcPrinter funcs[] = {
		{"c", printChar},
		{"i", printInt},
		{"f", printFloat},
		{"s", printString}
	};

	va_start(args, format);

	while (format && format[i])
	{
		j = 0;

		/**
		 * 4 equals to the number of funcs present
		 * therefore if j is less than four and our current
		 * format is not equal to format in funcs
		 * then j becomes j + 1
		 */

		while (j < 4 && (format[i] != *(funcs[j].symbol)))
			j++;
		if (j < 4)
		{
			printf("%s", separator);
			funcs[j].printFunc(args);
			separator = ", ";
		}
		i++;
	}
	printf("\n");

	va_end(args);
}
