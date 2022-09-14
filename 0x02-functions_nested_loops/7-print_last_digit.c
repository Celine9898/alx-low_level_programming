#include "main.h"
#include "6-abs.c"
/**
 * print_last_digit - return last digit
 *
 * @n: integer to get last digit of
 * Return: 0 or 1
 *
 */
int print_last_digit(int n)
{
	_putchar('0' + _abs(n % 10));
	return (_abs(n % 10));
}
