#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Write a program that prints all possible
 * combinations of two two-digit numbers.
 * Return: always 0
 */
int main(void)
{
int i;
int j;
int k;

for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
for (k = 0; k <= 9; k++)
{
if (k > j && j > i)
{
putchar(i + '0');
putchar(j + '0');
putchar(k + '0');
if (i != 7 || j != 8 || k != 9)
{

putchar(',');
putchar(',');
}
}
}
}
}
putchar('\n');
return (0);
}
