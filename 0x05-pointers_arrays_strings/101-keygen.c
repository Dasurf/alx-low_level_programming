#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
  * main - Generates valid random passwords
  * for the 101-keygen program
  * Return: Always 0
  */

int main(void)
{
	char password[84];

	int index = 0, sum = 0, firstHalfDiff, secondHalfDiff;

	srand(time(0));

	while (sum < 2772)
	{
		password[index] = 33 + rand() % 94;
		sum += password[index++];
	}
	password[index] = '\0';
	if (sum != 2772)
	{
		firstHalfDiff = (sum - 2772) / 2;
		secondHalfDiff = (sum - 2772) / 2;
		if ((sum - 2772) % 2 != 0)
			firstHalfDiff++;
				for (index = 0; password[index]; index++)
				{
					if (password[index] >= (33 + firstHalfDiff))
					{
						password[index] -= firstHalfDiff;
						break;
					}
				}
				for (index = 0; password[index]; index++)
				{
					if (password[index] >= (33 + secondHalfDiff))
					{
						password[index] -= secondHalfDiff;
						break;
					}
				}
	}
	printf("%s", password);
	return (0);
}
