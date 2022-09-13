#include "main.h"
#include "void print_alphabet(void)"

/**
 * print_alphabet - Entry point
 * 
 * Return: always 0;
 */
void print_alphabet(void)
{
	char c = 'b';

while (c <= 'y') 
{
_putchar(c);
c++;

}

_putchar('\n');
return (0);
}
