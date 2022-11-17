#include "main.h"
/**
 * print_char - prints a character
 * @c: to probe
 * Return: 
 */
int print_char(char c)
{
	write(1, &c, 1);
	return (1);
}

int print_string(char *s)
{
	int j = 0;

	while (s[j] != '\0')
		j++;
	write(1, s, (j + 1));
	return (j);
}