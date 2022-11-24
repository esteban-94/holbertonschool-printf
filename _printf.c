#include "main.h"
/**
 * _printf - print an argument in the standard output.
 * @format: string format to print.
 * Return: print_len if exited correctly.
*/
int _printf(char *format, ...)
{
	int i = 0;
	unsigned int print_len = 0;
	va_list a;
	char *buffer;
	int (*selectioned_case)(char *, int, va_list);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		exit(1);
	buffer = malloc(sizeof(char) + 100);
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
			buffer[print_len] = format[i];
			print_len++;
		}
		i++;
	}
	write(STDOUT_FILENO, buffer, print_len);
	va_end(a);
	free(buffer);
	return (print_len);
}
