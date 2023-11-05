#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include "main.h"
/**
 * check_spec - function pointer to test if specifiers are valid
 *
 * @format: pointer to the character, this charatcer will then be tested 
 * if is a valid specifier or not
 *
 * Return: a pointer to a function housing the list of the argumants
 */
int (*check_spec(const char *format))(va_list)
{
	int a;
	
	form_t b[] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_pct},
		{"d", print_dec},
		{"i", print_dec},
		{"\0", NULL}
	};
	/* .type refers to format specifier string (c, s, %, etc.) */
	for (a = 0; b[a].type; a++)
	{
		if (*format == b[a].type)

			return (b[a].f);
		/* .f points to the appropriate print function */
	}	

	return (NULL);
}
