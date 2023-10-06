#include <stdio.h>
/**
 * main - Entry point
 * Description: 'A c programme that prints each letter of the alphabet'
 * Return: When it's not 0 then it is a success
 */
int main(void)
{
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alphabet[i]);

	}
	putchar('\n');
	return (0);
}
