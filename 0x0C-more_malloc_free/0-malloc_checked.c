#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked- function that allocates memory using malloc
 * @b: size of memory to be allocated
 * Return: returns a pointer to the allocated memory or NULL
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
