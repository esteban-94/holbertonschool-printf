#include "main.h"

int _printf(char *format, ...)
{
	int i = 0;
	unsigned int print_len = 0;
	va_list a;
	char *buffer;
	int (*selectioned_case)(va_list, char *, int);

    buffer = malloc(sizeof(char) + 5000);
    va_start(a, format);
	while (format && format[i])
	{
		if (format[i] != '%')
		{
			buffer[print_len] = format[i];
			print_len++;
		}
		else
		{
			selectioned_case = get_format_especifier(&(format[i + 1]));
			if (selectioned_case != NULL)
			{
				print_len = selectioned_case(a, &buffer[print_len], print_len);
				i++;
			}
			else
			{
				buffer[print_len] = format[i];
				print_len++;
			}
		}
		i++;
		
	}
	write(STDOUT_FILENO, buffer, print_len);
	va_end(a);
	return (print_len);
}
