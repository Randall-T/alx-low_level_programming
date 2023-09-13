#include "main.h"

/**
 * print_binary - function that prints the binary form of a number
 * @n: number to print in binary
 */

void print_binary(unsigned long int n)
{
	int r, index = 0;
	unsigned long int binary;

	for (r = 63; r >= 0; r--)
	{
		binary = n >> r;

		if (binary & 1)
		{
			_putchar('1');
			index++;
		}
		else if (index)
			_putchar('0');
	}
	if (!index)
		_putchar('0');
}
