#include "main.h"

/**
 * find_print_func - Gets the appropiate function according to the specifier.
 * @k: Specifier key.
 * @args: Variable argument list.
 * Return: Output of the called function.
 */
int find_print_func(char k, va_list args)
{
	int i = 0, j = 0;
	SPECIFIER print_funcs[] = {
		{'c', print_char},
		{'s', print_string},
		{'d', print_digits},
		{'i', print_digits},
		{'b', print_binary}
	};
	while (&(print_funcs[j]) <= &print_funcs[4])
	{
		if (k == print_funcs[j].key)
		{
			i = print_funcs[j].func(args);
			break;
		}
		j++;
	}
	return (i);
}
