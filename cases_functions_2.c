#include "main.h"
/**
 * _case - print a unsigned number.
 * @buf: number buf.
 * @print_len: string length.
 * @val: va_list argument.
 * Return: length to print.
*/
int u_case(char *buf, int print_len, va_list val)
{
	int n1;
	unsigned int n2, i = 0, dig_count = 0;
	char num[10], dig;

	n1 = va_arg(val, int);
	n2 = n1;
	do {
		dig_count++;
		n2 = n2 / 10;
	} while (n2 != 0);
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
    for (i = 0; i < dig_count; i++)
	{
		buf[i] = num[i];
		print_len++;
	}
	
	return (print_len);
}