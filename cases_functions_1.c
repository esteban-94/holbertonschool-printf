#include "main.h"

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
	int i=0;
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
	int n1, n2, i = 0, dig_count = 0;
	char num[10], dig;

	n1 = va_arg(val, int);
	if (n1 == 0)
	{
		buf[0] = '0';
		return (print_len + 1);
	}
	n2 = n1;
	while (n2 != 0)
	{
		dig_count++;
		n2 = n2 / 10;
	}
	if (n1 < 0)
	{
		buf[0] = '-';
		print_len++;
		n2 = n1 * -1;
		for (; i < dig_count; i++)
		{
			dig = '0' + (n2 % 10);
			num[dig_count - i - 1] = dig;
			n2 = n2 / 10;
		}
		for (i = 0; i < dig_count; i++)
		{
			buf[i + 1] = num[i];
			print_len++;
		}
	}
	else
	{
		n2 = n1;
		for (; i < dig_count; i++)
		{
			dig = '0' + (n2 % 10);
			num[dig_count - i - 1] = dig;
			n2 = n2 / 10;
		}
		for (i = 0; i < dig_count; i++)
		{
			buf[i] = num[i];
			print_len++;
		}
	}
	return (print_len);
}