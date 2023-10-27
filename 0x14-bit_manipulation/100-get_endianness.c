#include "main.h"

/**
 * get_endianness - checks the endianness
 * Returns: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int check = 1;
	char *c = (char *)&check;

	if (*c)
		return (1);
	return (0);
}
