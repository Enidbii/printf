#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: character string
 * Return: number of characters printed excludes null byte
 */
int _printf(const char *format, ...)
{
	va_list args;
	char *char_c;

	va_start(args, format);
	if (args == 0)
		return (-1);

	char_c = vfprintf(stdout, format, args);
	va_end(args);

	return (char_c);
}
