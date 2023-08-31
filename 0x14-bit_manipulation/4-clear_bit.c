#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: number
 * @index: index starting from 0 of the bit to be set
 *
 * Return: 1 if successful, -1 if error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long clear;

	if (index > sizeof(unsigned long) * 8)
		return (-1);

	clear = ~(1 << index);

	*n = *n & clear;

	return (1);
}
