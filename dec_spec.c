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

	if (x == NULL)
		return (-1);

	if (x < 0) 
	{
		c = c + putchar('-');
		a = x * -1;
	}			/* if x is negative, print a minus sign and set a to the absolute value x */
	
	a = x;

	b = a;

	while (b > 9)
	{
		b = b / 10;
		count = count * 10;
	} 				/* calculates the # of digits in a by repeatdly dividing b by 10 until b is less than 10, 
					   count is used to track the number of digits*/ 
	while (count >= 1)
	{
		c = c + putchar(((a / count) % 10) + '0');
		count = count / 10;
	}				/* prints each digit of a 1 by 1, from left to right
					   reduces count by a factor of 10 to move to the next digit*/
	return (c);			

					/* returns the length of the printed number stored in c*/
}
	
