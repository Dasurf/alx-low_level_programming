#include <stdio.h>
#include <stdlib.h>

/**
 * main - This program prints the minimum number of
 * coins to make change for an amount of money.
 *
 * @argc: This holds the number of arguments passed
 * @argv: An array pointer that holds the arguments passed
 *
 * Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
	int cents, coin_num = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		cents = atoi(argv[1]);
		while (cents > 0)
		{
			if (cents >= 25)
				cents -= 25;
			else if (cents >= 10)
				cents -= 10;
			else if (cents >= 5)
				cents -= 5;
			else if (cents >= 2)
				cents -= 2;
			else if (cents >= 1)
				cents -= 1;
			coin_num += 1;
		}
	}
	printf("%d\n", coin_num);

	return (0);
}
