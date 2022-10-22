#include "main.h"

/**
 * print_per - writes character to stdout
 * @a:input character
 * @char_c: pointer to memory
 * @i: index for memory pointer
 * Return: 1
 */
int print_per(va_list a  __attribute__((unused)), char *char_c, unsigned int i)
{
	charc_handler(char_c, '%', i);
	return (1);
}
