#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>

/* Structure definition */
typedef struct form_spec
{
	char type;
	int (*f)(va_list);
} form_t;

/* Function declarations used in main file */
int print_char(va_list args);
int print_pct(va_list args);
int print_str(va_list args);
int (*check_spec(const char *format))(va_list);
int _printf(const char *format, ...);
int print_dec(va_list args);
#endif
