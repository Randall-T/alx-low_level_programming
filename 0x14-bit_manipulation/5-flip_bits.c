#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 *		to get from one number to another
 * @n: the number
 * @m: the flipped number
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int r, t = 0;

	r = n ^ m;

	while (r > 0)
	{
		t += (r & 1);
		r >>= 1;
	}

	return (t);
}
