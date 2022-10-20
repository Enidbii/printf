#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
/**
 * struct print_f - structure for the printf functions
 * @args_type: identifies type
 * @function: pointer to printf functions
 * Description: This structure store funstions to the printf function
 */
typedef struct print_f
{
	char *args_type;
	int (*function)(va_list, char *, unsigned int);
} print_ft;
int _printf(const char *format, ...);
unsigned int charc_handler(char *char_c, char c, unsigned int index_c);
int print_per(va_list a __attribute__((unused)), char *char_c, unsigned int i);
int (*print_func(const char *i, int index_c))(va_list, char *, unsigned int);
int all_print_function(const char *i, index_a);
int print_i(va_list args, char *char_c, unsigned int index_c);
int print_out(char *mem, unsigned int no_mem);
int print_string(va_list args, char *char_c, unsigned int index_c);
#endif
