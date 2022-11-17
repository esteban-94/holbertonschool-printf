#include "main.h"
/**
 * print_char - prints a character
 * @c: char to print
 * Return: 1 if extited correctly
 */
int print_char(char c)
{
	write(1, &c, 1);
	return (1);
}
/**
 * print_string - prints a string
 * @s: string to print
 * Return: j if exited correctly
 */
int print_string(char *s)
{
	int j = 0;

	if (s == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}

	while (s[j] != '\0')
		j++;
	write(1, s, j);
	return (j);
}
