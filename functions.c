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