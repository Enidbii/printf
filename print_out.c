#include "main.h"

/**
 * print_out - prints memory
 * @mem: memory pointer
 * @no_mem: number of bytes it is to print
 * Return: no of bytes
 */
int print_out(char *mem, unsigned int no_mem)
{
	return (write(1, mem, no_mem));
}
