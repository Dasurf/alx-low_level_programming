#include <stdio.h>
/**
 * main - Entry point
 * Description: 'A c programme that prints each letter of the alphabet'
 * Return: When it's not 0 then it is a success
 */

int main(void)
{
	char alphabets[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(alphabets[i]);
	}
	putchar('\n');
	return (0);
}
