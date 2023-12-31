#include <stdlib.h>
#include <stdio.h>

/**
 * main - Program that multiplies two arguments passed into it
 *
 * @argc: This holds the number of arguments passed
 * @argv: An array pointer that holds the arguments passed
 *
 * Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
	int product;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		product = (atoi(argv[1]) * atoi(argv[2]));
		printf("%d\n", product);
	}

	return (0);
}
