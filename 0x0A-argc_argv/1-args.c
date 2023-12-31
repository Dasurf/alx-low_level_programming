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

int main(int argc, char __attribute__((unused)) *argv[])
{
	int num;
	int i = 0;

	while (i < argc)
	{
		num = i;
		i++;
	}
	printf("%d\n", num);

	return (0);
}
