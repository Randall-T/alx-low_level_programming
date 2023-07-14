#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description: Print base16 numbers in lowercase with putchar
 * Return: Always 0 (Success)
*/
int main(void)
{
	int digit = 48; /* start of count*/

	while (digit <= 102) /*end of count*/
	{
		putchar(digit);

		/* skip 10 to 96; check why later*/
		if (digit == 57)
			digit += 39;
		++digit;
	}
	putchar('\n');

	return (0);
}
