#include "main.h"

/**
 * print_string - prints string to stdout
 * @args: arguments passed
 * @char_c: pointer to memory
 * @index_c: point in memory
 * Return: string
 */
int print_string(va_list args, char *char_c, unsigned int index_c)
{
	char *str;
	unsigned int i;
	char nada[] = "(null)";

	str = va_arg(args, char *);
	if (str == NULL)
	{
		for (i = 0; nada[i]; i++)
			index_c = charc_handler(char_c, nada[i], index_c);
		return (6);
	}

	for (i = 0; str[i]; i++)
		index_c = charc_handler(char_c, str[i], index_c);
	return (i);
}
