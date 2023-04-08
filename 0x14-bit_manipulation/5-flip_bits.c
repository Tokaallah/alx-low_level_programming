#include "main.h"

/**
 * flip_bits - flips bits
 * @n: first number
 * @m: second number
 * Return: unsigned int value of number
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int count = 0;

	while (xor != 0)
	{
		count += xor & 1;
		xor >>= 1;
	}

	return (count);
}
