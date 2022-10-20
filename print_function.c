#include "main.h"

/**
 * all_print_function - all identifiers
 * @i: identifier
 * @index_a: index of identifier
 * Return: identifiers
 */
int all_print_function(const char *i, index_a)
{
	print_t pr[] = {
		{"c", print_c}, {"s", print_string},
		{"i", print_i}, {"d", print_i},
		{" %", print_perc}, {NULL, NULL}
	};
	int k = 0, l = 0, index_uno;

	index_uno = index_a;
	while (pr[k].args_type)
	{
		if (i[index_a] == pr[k].args_type[l])
		{
			if (pr[k].args_type[l + 1] != '\0')
				index_a++, l++;
			else
				break;
		}
		else
		{
			l = 0;
			k++;
			index_a = index_uno;
		}
	}
	return (l);
}
