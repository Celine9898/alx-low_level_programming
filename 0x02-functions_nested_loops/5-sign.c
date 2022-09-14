#include "main.h"

/**
 * print_sign - main function
 *
 * @n: character to compare
 *
 * Return: 1 if positive, 0 if zero, -1 if negative
 */

int print_sign(int n)
{
int test;

if (n > 0)
{
	test = 1;
	_putchar('+');
}
else if (n == 0)
{
	test = 0;
	_putchar('0');
}
else
{
	test = -1;
	_putchar('-');
}

return (test);
}
