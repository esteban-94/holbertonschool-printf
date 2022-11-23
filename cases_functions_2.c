#include "main.h"
/**
 * u_case - print a unsigned number.
 * @buf: number buf.
 * @print_len: string length.
 * @val: va_list argument.
 * Return: length to print.
*/
int u_case(char *buf, int print_len, va_list val)
{
	int n1;
	unsigned int n2, i = 0, dig_count = 0, max_number = 4294967295;
	char num[10], dig;

	n1 = va_arg(val, int);
	n2 = n1;
	do {
		dig_count++;
		n2 = n2 / 10;
	} while (n2 != 0);
	if (n1 < 0)
		n2 = max_number + n1 + 1;
	else
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
	return (print_len);
}

int o_case(char *buf, int print_len, va_list val)
{
	int n1;
	unsigned int n2, i = 0, dig_count = 0;
	char num[33], dig;

	n1 = va_arg(val, int);
	n2 = n1;
	do {
		dig = '0' + (n2 % 8);
		num[i] = dig;
		i++;
		dig_count++;
		n2 = n2 / 8;
	} while (n2 != 0);
	i = 0;
	while (i < dig_count)
	{
		buf[i] = num[dig_count - i - 1];
		i++;
		print_len++;
	}
	return (print_len);
}


int x_case(char *buf, int print_len, va_list val)
{
	int n1;
	unsigned int n2, dig1, i = 0, j = 0, dig_count = 0, numb[]={10, 11, 12, 13, 14, 15};
	char num[33], letters[]={'a', 'b', 'c', 'd', 'e', 'f'}, dig;

	n1 = va_arg(val, int);
	n2 = n1;
	do {
		dig1 = n2 % 16;
			if (dig1 > 9 )
			{
				while(j < 6)
				if (dig1 == numb[j])
					dig1 = letters[j];
			}
			else
				dig = '0' + dig1;
		num[i] = dig;
		i++;
		dig_count++;
		n2 = n2 / 16;
	} while (n2 != 0);
	i = 0;
	while (i < dig_count)
	{
		buf[i] = num[dig_count - i - 1];
		i++;
		print_len++;
	}
	return (print_len);
}