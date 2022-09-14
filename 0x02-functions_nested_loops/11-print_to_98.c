#include "main.h"
/**
 * print_times_table - times table function
 * @n: integer to return
 *
 */
void print_times_table(int n)
{
	int i;
	int k;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (k = 0; k <= n; k++)
			{
				int prod = k * i;

				if (k == 0)
				{
					_putchar('0');
				} else if (prod <= 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar('0' + (prod / 100));
					_putchar('0' + ((prod / 10) % 10));
					_putchar('0' + (prod % 10));
				} else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + (prod / 10));
					_putchar('0' + (prod % 10));

				}
			}
			_putchar('\n');
		}
	}
}

