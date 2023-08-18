#include "variadic_functions.h"
/**
 * print_all - prints char, integer, float and string
 * @format: list of types of arguments passed to the function
 * Return: Void
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	unsigned int k = 0, start = 0;
	char *p;

	va_start(valist, format);
	while (format && format[k] != '\0')
	{
		switch (format[k])
		{case 'c':
			switch (start)
			{case 1: printf(", "); }
			start = 1;
			printf("%c", va_arg(valist, int));
			break;
		case 'i':
			switch (start)
			{case 1: printf(", "); }
			start = 1;
			printf("%i", va_arg(valist, int));
			break;
		case 'f':
			switch (start)
			{case 1: printf(", "); }
			start = 1;
			printf("%f", va_arg(valist, double));
			break;
		case 's':
			switch (start)
			{case 1: printf(", "); }
			start = 1;
			p = va_arg(valist, char*);
			if (p)
			{printf("%s", p);
				break; }
			printf("%p", p);
			break;
		} k++;
	}
	printf("\n");
	va_end(valist);
}
