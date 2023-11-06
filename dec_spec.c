#include "main.h"
/**
 * print_dec - identifies i and d specifiers and returns 
 *
 * @args: the argument passed through the logic 
 *
 * Return: the length of the printed number
 */
int print_dec(va_list args)
{
	int x;
	unsigned int a, b, c = 0;
	unsigned int count = 1;

	x = va_arg(args, int); /* retrieving 'arg' and assigning the value to x */

	if (x < 0) 
	{
		c = c + putchar('-');
		a = x * -1;
	}			/* if x is negative, print a minus sign and set a to the absolute value x */
	else
	{
		a = x; /* don't reassign to a if x is negative */
	}

	b = a;

	while (b > 9)
	{
		b = b / 10;
		count = count * 10; /* finds # of digits in a by dividing b by 10 until < 10 */
				    /* count used to track # of digits */
	}
	while (count >= 1)
	{
		putchar(((a / count) % 10) + '0'); /* prints each digit of a 1 by 1 from left to right */
		count = count / 10; /* reduces count by a factor of 10 to move to next digit */
		c++; /*increment count for each character printed */
	}
	
	return (c); /* returns the length of the printed number stored in c*/
}
