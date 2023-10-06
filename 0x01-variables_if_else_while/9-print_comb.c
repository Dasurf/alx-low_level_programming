#include <stdio.h>

/**
 * main - Entry point
 * Description: 'A programme that prints all lower case letters except q and e'
 * Return: When it's not 0 then it is a success
 */

int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
