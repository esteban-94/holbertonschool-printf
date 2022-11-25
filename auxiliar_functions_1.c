#include "main.h"
/**
 * get_format_especifier - get specifier for _printf function.
 * @arg: format argument.
 * Return: the specified format.
*/
int (*get_format_especifier(char *arg))(char *, int, va_list)
{
	int i = 0;
	print_cases formats[] = {
		{"%", perc_case},
		{"c", c_case},
		{"s", s_case},
		{"i", d_case},
		{"d", d_case},
		{"b", b_case},
		{"u", u_case},
		{"o", o_case},
		{"x", x_case},
		{"X", X_case}
		};

	while (i < 10)
	{
		if (*arg == *(formats[i]).allcases)
			return ((formats[i].selectioned_case));
		i++;
	}
	return (NULL);
}
