#include "main.h"

/**
 * print_char - prints a variable argument character.
 * @args: Varable Argument list.
 * Return: Number of bytes printed.
 */
int print_char(va_list args)
{
	char c = va_arg(args, int);

	return (_putchar(c));
}

/**
 * print_string - prints a variable argument string.
 * @args: Varable Argument list.
 * Return: Number of bytes printed.
 */
int print_string(va_list args)
{
	int i = 0;
	char *s = va_arg(args, char *);

	s = (s) ? s : "(null)";
	while (*s != '\0')
	{
		i += _putchar(*s);
		s++;
	}
	return (i);
}

/**
 * print_digits - prints a variable argument number.
 * @args: Varable Argument list.
 * Return: Number of bytes printed.
 */
int print_digits(va_list args)
{
	int i = 0, *out, *output;
	int num = va_arg(args, int);

	out = malloc(sizeof(num));
	output = out;
	while (num)
	{
		*output = num % 10;
		num = num / 10;
		output++;
	}
	while (output >= out)
	{
		i += _putchar('0' + *output);
		output--;
	}
	return (i);
}

/**
 * print_binary - prints a variable argument number in binary.
 * @args: Varable Argument list.
 * Return: Number of bytes printed.
 */
int print_binary(va_list args)
{
	int i, *out, *output;
	int num = va_arg(args, int);

	out = malloc(sizeof(num));
	output = out;
	while (num)
	{
		*output = num % 2;
		num = num / 2;
		output++;
	}
	while (output >= out)
	{
		i += _putchar('0' + *output);
		output--;
	}
	return (i);
}
