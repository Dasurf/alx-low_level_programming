#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdio.h>
#include <stdarg.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct print - A structure type defining our print
 *
 * @symbol: Our symbol representing the data type
 * @print_func: a function pointer that prints
 *             a data type according to the symbol
*/
typedef struct print
{
	char *symbol;
	void (*printFunc)(va_list arg);
} funcPrinter;



#endif /* VARIADIC_FUNCTIONS_H */