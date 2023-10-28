#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

/**
 * isNum - checks if string array is number
 * @dig: string to be checked
 * Return: 0 if it is a number and
 *         1 if it is not a number
*/

int isNum(char dig[])
{
	int i, len = strlen(dig);

	for (i = 0; i < len; i++)
	{
		if (!isdigit(dig[i]))
			return (1);
	}
	return (0);
}


/**
 * main - A program that adds positive numbers
 *
 * @argc: This holds the number of arguments passed
 * @argv: An array pointer that holds the arguments passed
 *
 * Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
	int i, sum;

	if (argc == 1)
	{
		printf("%d\n", 0);
	}
	else
	{
		sum = 0;
		for (i = 1; i < argc; i++)
		{
			if (isNum(argv[i]) == 0)
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
