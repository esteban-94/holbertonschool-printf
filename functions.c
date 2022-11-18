#include "main.h"
#include <stdio.h>
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
/**
 * print_number - print a number.
 * @n: number tu print
 * Return: dig_count if exited correctly.
 */
int print_number(int n)
{
	int n2, i = 0, dig_count = 0;
	char num[] = "123456789", dig;
	
	if (n == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	n2 = n;
	while (n2 != 0)
	{
		dig_count++;
		n2 = n2 / 10;
	}
	n2 = n;
	for (;i < dig_count; i++)
	{
		dig = '0' + (n2 % 10);
		num[dig_count - i - 1] = dig;
		n2 = n2 / 10;
	}
	write(1, &num[0], dig_count);
	return (dig_count);
}
