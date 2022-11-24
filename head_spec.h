#ifndef SPEC_H
#define SPEC_H

typedef struct spec
{
	char *sp;
	int (*f);
} spec_f;

int _printf(const char *format, ...);
int (*get_spec_format(char p));

#endif
