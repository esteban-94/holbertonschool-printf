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
	char *aux;
	int s_len;

	aux = va_arg(val, char*);
	if (aux == NULL)
		aux = "(null)";
	s_len = _strlen(aux);
	s = malloc((sizeof(char) * s_len) + 1);
	if (s == NULL)
		return (1);
	_strcpy(s, aux);
	print_len = replace(buf, s, print_len);
	free(s);
	return (print_len);
}


int replace(char *buffer, char *s, int print_len)
{
	int i = 0;

	while (s && s[i])
	{
		buffer[i] = s[i];
		print_len += 1;
		i++;
	}
	return (print_len);
}
