#include "main.h"

/**
 * flip_bits - returns the number of bits you would
 * need to flipt to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int bits;
	unsigned long int proc = n ^ m;

	for (bits = 0; proc != 0;)
	{
		if ((proc & 1) == 1)
			bits++;

		proc = proc >> 1;
	}

	return (bits);
}
