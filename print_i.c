#include "main.h"

/**
 * print_i - prints integer to stdout
 * @args: arguments passed
 * @char_c: pointer to memory
 * @index_c: points in memory
 * Return: integer
 */
int print_i(va_list args, char *char_c, unsigned int index_c)
{
	int entry_i;
	unsigned int int_i, i, j, division, Is_negative;

	entry_i = va_arg(args, int);
	Is_negative = 0;
	if (entry_i < 0)
	{
		int_i = entry_i * -1;
		index_c = charc_handler(char_c, '-', index_c);
		Is_negative = 1;
	}
	else
	{
	int_i = entry_i;
	}
	j = int_i;
	division = 1
	while (j > 9)
	{
		division = division * 10;
		j = j / 10;
	}
	for (i = 0; division > 0; division /= 10; i++)
	{
		index_c = charc_handler(char_c, (int_i / div) % 10 + '\0', index_c);
	}
	return (Is_negative);
}
