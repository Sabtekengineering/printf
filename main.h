#ifndef MAIN_H
#define MAIN_H

/* Libraries */
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * struct _specifier - Structure of the key-function pair.
 * @key: Character key of the function.
 * @func: Function pointer to appropiate function.
 */
struct _specifier
{
	char key;
	int (*func)();
};

typedef struct _specifier SPECIFIER;

int _putchar(char c);
int _printf(const char *format, ...);

/* Print Functions */
int print_char(va_list);
int print_string(va_list);
int print_digits(va_list);
int print_binary(va_list);
int print_percent(va_list __attribute__((unused)));

/* Wrapper Functions */
int find_print_func(char, va_list);

#endif /* MAIN_H */
