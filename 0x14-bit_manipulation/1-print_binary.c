#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to be printed
 */

void print_binary(unsigned long int n)
{
	int r;
	int zero_bit = 0;
	unsigned long int binary;

	for (r = 63; r >= 0; r--)
	{
		binary = n >> r;

		if (binary & 1)
		{
			_putchar('1');
			zero_bit++;
		}
		else if (zero_bit)
			_putchar('0');
	}
	if (!zero_bit)
		_putchar('0');
}
