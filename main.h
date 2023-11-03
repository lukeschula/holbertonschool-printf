#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h.>
#include <stdio.h>

/* Structure definition */
typedef struct form_spec
{
	char type;
	int (*f)(va_list);
} form_t;

/* Function declarations used in main file */
void print_char(va_list args);
void print_percent(va_list args);
void print_string(va_list args);

#endif
