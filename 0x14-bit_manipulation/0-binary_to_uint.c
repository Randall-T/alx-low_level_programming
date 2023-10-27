#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0 if
 *		one or more chars in b are not 0 or 1
 *		b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int bit;
	unsigned int value = 0;

	if (!b)
		return (0);

	for (bit = 0; b[bit]; b++)
	{
		if (b[bit] < '0' || b[bit] > '1')
			return (0);

		value = 2 * value + (b[bit] - '0');
	}
	return (value);
}
