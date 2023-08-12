#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that allocates memory for an array using malloc
 * @min: start of range
 * @max: end of range
 * Return: returns a pointer to the allocated array or NULL
 */

int *array_range(int min, int max)
{
	int *range, i, size;

	if (min  > max)
		return (NULL);

	size = max - min + 1;
	range =  malloc(sizeof(int) * size);

	if (range == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		range[i] = min++;
	}
	return (range);
}
