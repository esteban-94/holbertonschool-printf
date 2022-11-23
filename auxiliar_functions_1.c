#include "main.h"
/**
 * _realloc - reallocation memory of the buffer.
 * @ptr: pointer to the memory.
 * @old_size: old memory size.
 * @new_size: new memory size.
 * Return: p if memory is free.
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	unsigned int i, max = new_size;
	char *oldp = ptr;

	if (ptr == NULL)
	{
		p = malloc(new_size);
		return (p);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);

	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	if (new_size > old_size)
		max = old_size;
	for (i = 0; i < max; i++)
		p[i] = oldp[i];
	free(ptr);
	return (p);
}
/**
 * get_format_especifier - get specifier for _printf function.
 * @arg: format argument.
 * Return: the specified format.
*/
int (*get_format_especifier(char *arg))(char *, int, va_list)
{
	int i = 0;
	print_cases formats[] = {
		{"%", perc_case},
		{"c", c_case},
		{"s", s_case},
		{"i", d_case},
		{"d", d_case},
		{"b", b_case}
		};

	while (i < 6)
	{
		if (*arg == *(formats[i]).allcases)
			return ((formats[i].selectioned_case));
		i++;
	}
	return (NULL);
}
