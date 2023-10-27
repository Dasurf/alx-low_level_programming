#include <stdlib.h>
#include <stdio.h>

/**
 * main - This is a program that prints all arguments it receives
 *
 * @argc: This holds the number of arguments passed
 * @argv: This is an array pointer that holds the arguments passed
 *
 * Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
	int count;

	if (argc > 1)
	{
		for (count = 0; count < argc; count++)
		{
			printf("%s\n", argv[count]);
		}
	}
	return (0);
}
