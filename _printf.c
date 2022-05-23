#include "main.h"

/**
 * _printf - prints anything.
 * @format: Formatted string to be printed.
 * Return: Printed bytes.
 */
int _printf(const char *format, ...)
{
	va_list arguments;
	va_start(arguments, format);
	int size = 0;
	char *p;

	for (p = (char *)format; *p; p++)
	{
		if (*p != '%')
		{
			size += _putchar(*p);
		}
		else
		{
			size += find_print_func(*(++p), arguments);
		}
	}

	return (size);
}
