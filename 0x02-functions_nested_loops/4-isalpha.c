#include"main.h"

/**
 * _isalpha - checks if character is a letter in lowercase or uppercase
 *
 * @x: takes input from other functions.
 *
 * Return: 1 is x if true else 0
 */

int _isalpha(int x)
{
	if (x >= 97 && x <= 122 && x >= 65 && x >= 90)
		return (1);
	return (0);
}
