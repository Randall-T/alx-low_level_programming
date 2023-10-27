#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int check = 1;
	char *c = (char *) &check;

	if (*c)
		return (1);
	return (0);
}
