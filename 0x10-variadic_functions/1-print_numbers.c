#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers followed by a new line
 * @separator: The string to be printed between numbers
 * @n: The number of integers passed to the function
 * @...: The variable number of integers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int q;

	va_start(valist, n);

	for (q = 0; q < n; q++)
	{
		printf("%d", va_arg(valist, int));
		if (separator && q < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(valist);
}
