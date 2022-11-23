#include "main.h"

int perc_case(va_list __attribute__((unused)) val, char *buf, int print_len)
{
	buf[0] = '%';
    print_len++;
	return (print_len);
}


int c_case(va_list val, char *buf, int print_len)
{
	buf[0] = va_arg(val, int);
    print_len++;
	return (print_len);
}


int s_case(va_list val, char *buf, int print_len)
{
	char *s;
	int i=0;
	s = va_arg(val, char*);
	while (s[i] != '\0')
	{
		buf[i] = s[i];
		i++;
        print_len++;
	}
	return (print_len);
}
