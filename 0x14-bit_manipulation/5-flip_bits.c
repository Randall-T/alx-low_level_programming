#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would need to flip
 *		to get from one number to another
 * @n: the number to be flipped
 * @m: the number to flip n to
 * Return: number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip = n ^ m;
	unsigned long int number = 0;

	while (flip > 0)
	{
		number += (flip & 1);
		flip >>= 1;
	}

	return (number);
}
