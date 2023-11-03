#include <stdarg.h>
#include <stdio.h>
#include "main.h"

/**
 * print_char - function that will print a character following a %c
 * @args: accesses the variable argument passed to main function
 */

void print_char(va_list args)
{
	char character;

	character = va_arg(args, int);
	putchar(character);
}

/**
 * print_pct - function that prints the % conversion specifier following a %
 */

void print_pct(va_list args)
{
	putchar('%');
}

/**
 * print_str - function that will print the inputted string following a %s
 * @args: variable argument passed to main function
 */

void print_str(va_list args)
{
	char *string;

	string = va_arg(args, char*);

	while (*string)
	{
		putchar(*string);
		string++
	}
}
