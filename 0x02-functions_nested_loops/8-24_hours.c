#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * Return:void
 *
 */
void jack_bauer(void)
{
	int i;
	int k;

for (i = 0; i <= 23; i++)
{
for (k = 0; k <= 59; k++)	
{
_putchar(i / 10 + '0');
_putchar(i % 10 + '0');
_putchar(':');
_putchar(k / 10 + '0');
_putchar(k % 10 + '0');
_putchar('\n');
}
	}
}
