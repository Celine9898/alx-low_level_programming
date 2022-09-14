#include "main.h"

/**
 * print_alphabet_x10 -  prints 10 times the alphabet
 *
 * Return: always 0;
 *
 */
void print_alphabet_x10(void)
{
	char i;
	char j;

	for (j = 0; j <= 9; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
