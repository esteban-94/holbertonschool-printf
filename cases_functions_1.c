#include "main.h"
/**
 * perc_case - print the '%' character.
 * @buf: character buffer.
 * @print_len: string length.
 * Return: length to print.
*/
int perc_case(char *buf, int print_len, va_list __attribute__((unused)) val)
{
	buf[0] = '%';
	print_len++;
	return (print_len);
}


int c_case(char *buf, int print_len, va_list val)
{
	buf[0] = va_arg(val, int);
	print_len++;
	return (print_len);
}


int s_case(char *buf, int print_len, va_list val)
{
	char *s;
	int i = 0;

	s = va_arg(val, char*);
	if (s == NULL)
		s = "(null)";
	while (s[i] != '\0')
	{
		buf[i] = s[i];
		i++;
		print_len++;
	}
	return (print_len);
}


int d_case(char *buf, int print_len, va_list val)
{
	int n1, n3;
	unsigned int n2, i = 0, dig_count = 0;
	char num[10], dig;

	n1 = va_arg(val, int);
	n3 = n1;
	do {
		dig_count++;
		n3 = n3 / 10;
	} while (n3 != 0);
	if (n1 < 0)
		n2 = n1 * -1;
	else
		n2 = n1;
	for (; i < dig_count; i++)
	{
		dig = '0' + (n2 % 10);
		num[dig_count - i - 1] = dig;
		n2 = n2 / 10;
	}
	if (n1 < 0)
	{
		buf[0] = '-';
		print_len++;
		for (i = 0; i < dig_count; i++)
		{
			buf[i + 1] = num[i];
			print_len++;
		}
	}
	else
	{
		for (i = 0; i < dig_count; i++)
		{
			buf[i] = num[i];
			print_len++;
		}
	}
	return (print_len);
}
