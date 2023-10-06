#include <stdio.h>

/**
 * main - Entry point
 * Description: 'A programme that prints all lower case letters except q and e'
 * Return: When it's not 0 then it is a success
 */

int main(void)
{
	int i;

	for (i = 122; i >= 97; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
