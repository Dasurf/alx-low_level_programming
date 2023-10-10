#include "main.h"

/**
  * print_alphabet - function that prints 10 times the alphabet in lowercase
  */

void print_alphabet(void)
{
	int a, b;

	for (a = 0; a <= 9; ++a)
	{
		for (b = 'a'; b <= 'z'; ++b)
		{
			_putchar(b);
			_putchar('\n');
		}
	}
}
