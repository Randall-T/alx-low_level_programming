#include <stdio.h>

/**
 * first - prints a sentence
 * main function is executed
 */
void __attribute__ ((constructor)) first()
{
	printf("You're a beat! and yet, you must allow, \n");
	printf("I bore my house upon my back!\n");
}
