#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...); /*Prototype of _printf*/
int print_char(char c);
int print_string(char *s);
int get_spec_format(char *);

#endif