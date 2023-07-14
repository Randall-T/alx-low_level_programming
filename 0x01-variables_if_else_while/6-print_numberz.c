#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description: Print 0 to 9 with putchar
 * Return: Always 0 (Success)
*/
int main(void)
{
	int digit;

	while (digit <= 9)
	{
		/*conversion to ASCII*/
		putchar(digit + '0');
		++digit;
	}
	putchar('\n');

	return (0);
}
