#include <stdio.h>
/**
 * main - main block
 * Description: prints the alphabet in lowerecase,
 * and then in uppercase, followed by a new line.
 * Return: always 0
 */
int main(void)
{
	char c = 'a';

while (c <= 'z')
{
putchar(c);
c++;
}

c = 'A';

while (c <= 'Z')
{
putchar(c);
c++;
}

putchar('\n');
return (0);
}
