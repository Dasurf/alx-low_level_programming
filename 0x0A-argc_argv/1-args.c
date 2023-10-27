#include <stdlib.h>
#include <stdio.h>

/**
 * main - This is a program that prints the number of arguments
 *        that has been passed into it
 *
 * @argc: This holds the number of arguments passed
 * @argv: This is an array pointer that holds the arguments passed
 *
 * Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
	(void)argv;

	int num;
	int i;

	for (i = 0; i < argc; i++)
	{
		num = i;
	}
	printf("%d\n", num);

	return (0);
}
