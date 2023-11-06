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

	if (format == NULL)
	{
		return (0); /* returns 0 if format string is NULL (not provided) */
	}

	while (*format != '\0')
	{
		if (*format == '%') /* prevents seg fault if % is last character of string */
		{
			format++;

			if (*format == '\0')
			{
				putchar('%'); /* print '%' if it is last character on format string */
				count++;
				break; /* break loop if null terminator is encountered after '%' */
			}

			print_func = check_spec(format); /**
							   *calls check_spec to check conversion specifier
							   */

			if (print_func)
			{
				if (*format == '.')
				{
					putchar(*format); /* handles period after specifier */
					count++;
					format++;
				}

				if (print_func == print_str)
				{
					char* str = va_arg(args, char*); /* retrieve string using va_arg */
					if (str == NULL)
					{
						str = "(null)"; /* if str is NULL, assign "null" to str variable */
					}
					count += print_str(str);
				}

				count += print_func(args);
			}
			else
			{
				putchar('%'); /* print % character because no valid specifier found */
				count++;
				putchar(*format); /**
						    *handles case where character following % is unreocgnized
						    */
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
