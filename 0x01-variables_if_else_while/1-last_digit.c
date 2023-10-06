#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: 'A c programme that prints the last digit of a random number'
 * Return: When it's not 0 then it is a success
 */

int main(void)
{
	int n;
	int lastDig;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	lastDig = n % 10;
	if (lastDig > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastDig);
	}
	else if ((lastDig < 6) && (lastDig != 0))
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastDig);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, lastDig);
	}
	return (0);
}
