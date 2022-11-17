#include "main.h"
/**
 * _printf - function that pritf string
 * @format: character string
 * Return: 
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
					count++;
					write(1, "%", 1);
					break;
				case 'c':
					count++;
					print_char(va_arg(a, int));
					break;
				case '\0':
					return (-1);
					break;
				default:
				{
					count++;
					write(1, &format[--i], 1);
				}
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