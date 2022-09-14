#include "main.h"
/**
 * print_times_table - times table function
 * @n: integer to return
 *
 */
void print_times_table(int n)
{

while (n < 98)
{
	printf("%i, ", n);
	n++;
}
while (n > 98)
{
	printf("%i, ", n);
	n--;
}

printf("98");
putchar('\n');
}
