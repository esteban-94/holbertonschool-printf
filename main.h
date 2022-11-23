#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>


struct cases
{
	char *allcases;
	int (*selectioned_case)(char *buf, int print_len, va_list a);
};
typedef struct cases print_cases;


int _printf(char *format, ...);


int perc_case(char *, int, va_list);
int c_case(char *, int, va_list);
int s_case(char *, int, va_list);
int d_case(char *, int, va_list);
int b_case(char *, int, va_list);


void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int (*get_format_especifier(char *arg))(char *, int, va_list);

#endif
