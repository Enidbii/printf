#include "main.h"

/**
 * charc_handler - handles memory characters
 * @char_c:pointes to memory
 * @c: character to be handled
 * @index_c: position of a memory pointer
 * Return: index_c
 */
unsigned int charc_handler(char *char_c, char c, unsigned int index_c)
{
	if (index_c == 1024)
	{
		print_out(char_c, index_c);
		index_c = 0;
	}
	char_c[index_c] = c;
	index_c++;
	return (index_c);
}
