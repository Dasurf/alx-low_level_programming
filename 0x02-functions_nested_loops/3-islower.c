#include"main.h"

/**
 * _islower - function checks if character is lowercase
 *
 * @x: checks input of function
 *
 * Return: returns 1 if `x` is lowercase otherwise always 0 (Success)
 */

int _islower(int x)
{
	if (x >= 97 && x <= 122)
		return (1);
	return (0);
}
