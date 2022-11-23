#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>//para la variadica
#include <stdlib.h>//para el malloc
#include <unistd.h>//para el write
#include <stdio.h>//para el probar el printf

//struc definition for all cases
struct cases
{
	char *allcases;
	int (*selectioned_case)(va_list a, char *buf, int print_len);
} ;
typedef struct cases print_cases;

//principal function
int _printf(char *format, ...); 

//cases functions
int perc_case(va_list, char *, int);
int c_case(va_list, char *, int);
int s_case(va_list, char *, int);

//auxiliar functions
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int (*get_format_especifier(char *arg))(va_list, char *, int);

#endif
