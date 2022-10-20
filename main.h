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
}print_ft;
int _printf(const char *format, ...);
#endif
