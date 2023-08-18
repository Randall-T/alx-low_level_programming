#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 *
 * Retun: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list argva;
	unsigned int i;
	char *s;

	va_start(argva, n);

	for (i = 0; i < n; i++)
	{
		if (separator != NULL && i != 0)
			printf("%s", separator);

		s = va_arg(argva, char *);
		printf("%s", (s == NULL) ? "(nil)" : s);
	}
	printf("\n");
	va_end(argva);
}
