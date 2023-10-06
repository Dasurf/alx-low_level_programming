#include <stdio.h>

/**
 * main - Entry point
 * Description: 'A programme that prints all lower case letters except q and e'
 * Return: When it's not 0 then it is a success
 */

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (i = 97; i < 103; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
