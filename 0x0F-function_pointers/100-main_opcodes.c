#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Description: A program that prints the opcodes
 *              of its own main function.
 *              Usage: ./main number_of_bytes
 *
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: Success
*/

int main(int argc, char *argv[])
{
	int i, n;
	char *ptr = (char *) main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < n; i++)
	{
		printf("%02x", ptr[i] & 0xFF);
		if (i != n - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
