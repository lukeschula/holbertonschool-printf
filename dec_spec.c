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
	int length = 0; /* variable to keep track of length of printed output */

	x = va_arg(args, int); /* retrieving 'arg' and assigning the value to x */

	if (x < 0) 
	{
		putchar('-');
		a = -x; /* if x is negative, print a minus sign and set 'a' to absolute value of 'x' */
		length++; /* increment length to account for minus sign */
	}			
	else
	{
		a = x; /* don't reassign to a if x is negative */
	}

	b = a;

	while (b > 9)
	{
		b = b / 10; /*finds # of digits in 'a' by dividing b by 10 until < 10 */
		count = count * 10; /* for each digit removed from b we increase the value of count by 10 */
	}
	while (count > 0)
	{
		putchar((a / count) % 10 + '0'); /* prints each digit of 'a' by converting it to ASCII value */
		count = count / 10; /*reduces count by factor of 10 to move to next digit */
		length++; /* increment length for each digit printed */
	}
	
	return (length); /* returns the total length of printed output */
}
