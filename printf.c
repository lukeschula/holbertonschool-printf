#include <stdio.h>
#include <stdarg.h>
#include "main.h"
/**
 * _printf - will replicate printf by producing output according to format string
 * @format: a pointer to a character (format) string and specifies how output should be formatted
 * @... - variable number of arguments that replace the format specifiers in the format string
 *
 * Return: Will return the number of characters printed
 * Return: 0 when null
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;
	int (*print_func)(va_list); 

	va_start(args, format);
	
	if (format != NULL) /* return 0 if format string is NULL */
	
	while (*format != '\0')
	{
		if (*format == '%') /* prevents seg fault if % is last character of string */
		{
			format++;

			print_func = check_spec(format); /* calls check_spec to check conversion specifier */

			if (print_func)
			{
				if (*format == '.')
				{
					putchar(*format); /* handles period after specifier */
					count++;
					format++;
				}

				count += print_func(args);
			}
			else
			{
				putchar('%'); /* print % character because no valid specifier found */
				count++;
			}
		}
		else
		{
			putchar(*format);
			count++;
		}

		format++;
	}

	va_end(args);

	return (count);
}


