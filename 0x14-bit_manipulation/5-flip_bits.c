#include "main.h"

/**
 * flip_bits - A function that gets number of bits needed to flip
 * @n: How many bit flips are needed to equal m for n
 * @m: The number to set other equal
 * Return: number of flipped bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flipCount = 0;
	unsigned long int xor = (n ^ m), max = 0x01;

	while (max <= xor)
	{
		if (max & xor)
			flipCount++;
		max <<= 1;
	}
	return (flipCount);
}
