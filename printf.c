#include <stdio.h>
#include <stdarg.h>
#include "main.h"
/**
 * _printf - replicates printf by producing output according to format string
 * @format: a pointer to a character (format) string
 * @... - variable number of arguments that replace specifiers in format string
 *
 * Return: Will return the number of characters printed
 * 0 when format string not provided
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;
	int (*print_func)(va_list);

	va_start(args, format);

	if (format == NULL) /**checks both for non-existent format string and when format string points to empty string*/
	{
		return (-1);
	}

	while (*format != '\0')
	{
		if (*format == '%') 
		{
			format++;

			if (*format == '\0')
			{
				return (-1); /* return 0 if '%' is last character in format string */
			}

			print_func = check_spec(format); /**
							   *calls check_spec to check conversion specifier
							   */

			if (print_func)
			{
				int result = print_func(args);
				if (result < 0)
				{
					return (-1);
				}

				count += result;
			}	
			else
			{
				putchar('%'); /* print % character because no valid specifier found */
				putchar(*format);
				count += 2;
			}
				
			if (putchar(*format) == EOF)
			{
				return (-1);
			}	
				count++;
		
		

		format++;
	}

	va_end(args);

	return (count);
	}
}
