#include <stdarg.h>
#include <stdio.h>
#include "main.h"

/**
 * print_char - function that will print a character following a %c
 * @args: accesses the variable argument passed to main function
 */

int print_char(va_list args)
{
	char character;

	character = va_arg(args, int);
	putchar(character);

	return (1); /* one character is printed */
}

/**
 * print_pct - function that prints the % conversion specifier following a %
 */

int print_pct(va_list args)
{
	(void)args; /* allows this to be included in structure array */
	putchar('%');

	return (1); /* one character is printed */
}

/**
 * print_str - function that will print the inputted string following a %s
 * @args: variable argument passed to main function
 */

int print_str(va_list args)
{
	int count = 0;
	char *string;

	string = va_arg(args, char*);

	while (*string)
	{
		putchar(*string);
		string++;
		count++; /* increment count for each character printed in string */
	}

	return (count); /* return number of characters printed */
}
