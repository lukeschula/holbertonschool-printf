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
	unsigned int a, b;
	unsigned int count = 1;

	x = va_arg(args, int); /* retrieving 'arg' and assigning the value to x */

	if (x < 0) 
	{
		putchar('-');
		a = -x;
	}			/* if x is negative, print a minus sign and set a to the absolute value x */
	else
	{
		a = x; /* don't reassign to a if x is negative */
	}

	b = a;

	while (b > 9)
	{
		b = b / 10; /*finds # of digits in 'a' by dividing b by 10 until < 10 */
		count = count * 10; /* for each digit removed from b we increase the value of a by 10 */
	}
	while (count > 0)
	{
		putchar((a / count) % 10 + '0'); /* prints each digit of a 1 by 1 from left to right */
		count = count / 10; /* reduces count by a factor of 10 to move to next digit */
	}
	
	return (count); /* returns the count of digits */
}
