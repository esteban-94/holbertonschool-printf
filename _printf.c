#include "main.h"
/**
 * _printf - function that pritf string
 * @format: character string
 * Return: format specifier
 */
int _printf(const char *format, ...)
{
	va_list a;
	int count = 0, i = 0;

	if (format == NULL)
		return (-1);
	va_start(a, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			while (format[i++] == ' ')
				;
			switch (format[i])
			{
			case '%':
				count += write(1, "%", 1);
				break;
			case 'c':
				count += print_char(va_arg(a, int));
				break;
			case 's':
				count += print_string(va_arg(a, char *));
				break;
			case 'd' || 'i':
				count += print_string(va_arg(a, char *));
				break;
			default:
				count += write(1, &format[--i], 1);
			}
		}
		else
		{
			count++;
			write(1, &format[i], 1);
		}
		i++;
	}
	va_end(a);
	return (count);
}
