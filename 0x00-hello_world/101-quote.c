#include <unistd.h>
/**
 * main - Entry point
 *
 * Description: output a function but this time we return an error
 *
 * Return: exit code 1 indicating an error.
 */

int main(void)
{
	char quo[] = "and piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, quo, 59);
	return (1);
}
