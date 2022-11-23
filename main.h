#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>


struct cases
{
	char *allcases;
	int (*selectioned_case)(va_list a, char *buf, int print_len);
} ;
typedef struct cases print_cases;


int _printf(char *format, ...); 


int perc_case(va_list, char *, int);
int c_case(va_list, char *, int);
int s_case(va_list, char *, int);


void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int (*get_format_especifier(char *arg))(va_list, char *, int);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
int replace(char *buffer, char *s, int print_len);

#endif
