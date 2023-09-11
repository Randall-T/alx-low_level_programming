#include "lists.h"

void first(void) __attribute__ ((constructor));

/**
 * first - prints a sentence
 * main function is executed
 */
void first(void)
{
	printf("You're a beat! and yet, you must allow, \n");
	printf("I bore my house upon my back!\n");
}
