#include "main.h"
#include <stdio.h>

/**
 * print_char - prints character to stdout
 * @args: input characters
 * @char_c: points to memory
 * @index_c: index in memory
 * Return: 1 on success
 */
int print_char(va_list args, char *char_c, unsigned int index_c)
{
	char c;

	c = va_arg(args, int);
	charc_handler(char_c, c, index_c);
	return (1);
}
