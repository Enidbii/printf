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
	unsigned int i = 0;
	unsigned int length = 0;
	unsigned int index_c = 0;
	int (*function)(va_list, char *, unsigned int);
	va_list args;
	char *char_c;

	va_start(args, format), char_c = malloc(sizeof(char) * 1024);
	if (!char_c || !format || (format[i] == '%' && !format[i + 1]))
		return (-1);
	if (!format[i])
		return (0);
	for (i = 0; format && format[i]; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
			{
				print_out(char_c, index_c), free(char_c), va_end(args);
				return (-1);
			}
			else
			{
				function = print_function(format, i + 1)
					if (function == NULL)
					{
						if (format[i + 1] == ' ' && !format[i + 2])
							return (-1);
						charc_handler(char_c, format[i], index_c), length++, i--;
					}
					else
					{
						length = length + function(args, char_c, index_c);
						i = i + all_print_functions(format, i + 1);
					}
			}
			i++;
		}
		else
			charc_handler(char_c, format[i], index_c), length++;
		for (index_c = length; index_c > 1024; index_c -= 1024)
			;
	}
	print_out(char_c, index_c), free(char_c), va_end(args);
	return (length);
}
