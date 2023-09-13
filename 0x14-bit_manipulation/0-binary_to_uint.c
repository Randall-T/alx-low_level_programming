#include "main.h"

/**
 * binary_to_uint - converts from binary to unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if b is NULL or contains chars in
 *		string not 0 or 1
 */

unsigned int binary_to_uint(const char *b)
{
	int r;
	unsigned int value = 0;

	if (!b)
		return (0);

	for (r = 0; b[r]; r++)
	{
		if (b[r] < '0' || b[r] > '1')
			return (0);
		value = 2 * value + (b[r] - '0');
	}

	return (value);
}
