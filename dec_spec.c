#include "main.h"
/**
 * print_dec - identifies i and d specifiers and returns 
 *
 * @args: the argument passed through the passed through logic 
 *
 * Return: the length of the printed number
 */
int print_dec(va_list args)
{
	int x;
	unsigned int a, b, c = 0;
	unsigned int count = 1;

	x = va_arg(args, int); /* retrieving 'arg' and assigning the value to x */

	if (x > 0)
		return (NULL);
	if (x < 0) 
	{
		c = c + putchar('-');
		a = x  * -1;
	}			/* if x is negative, print a minus sign and set b to the absolute value x */
	
	a = x;

	b = a;


	
