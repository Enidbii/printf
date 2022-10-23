#include "main.h"

/**
 * print_func -selects the appropriate task to perform
 * @i: identifier arg
 * @index_cindex of identifier
 * Return:pointer to a function
 */
int (*print_func(const char *i, int index_c))(va_list, char *, unsigned int)
{
	print_ft pr[] = {
		{"c", print_char}, {"s", print_string},
		{"d", print_i}, {" %", print_per},
		{NULL, NULL},
	};

	int k = 0, l = 0, index_uno;

	index_uno = index_c;
	while (pr[k].args_type)
	{
		if (i[index_c] == pr[k].args_type[l])
		{
			if (pr[k].args_type[l + 1] != '\0')
				index_c++, l++;
			else
				break;
		}
		else
		{
			l = 0;
			k++;
			index_c = index_uno;
		}
	}
	return (pr[k].function);
}
