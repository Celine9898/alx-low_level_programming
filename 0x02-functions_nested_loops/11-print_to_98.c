#include "main.h"
#include "6-abs.c"
#include <stdio.h>
/**
 * print_times_table - times table function
 * @n: integer to return
 *
 */
void print_times_table(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
	} else
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
			{

				printf(", ");
			}
		}
	}
	printf("\n");
}
