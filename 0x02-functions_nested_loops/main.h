#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED

int _putchar(char);
void print_alphabet(void);

void print_alphabet_x10(void);
/**
 * _islower - prints if c is lower case 
 * @c: character to use 
 * Return: 1 or 0
 */
int _islower(int c);
int _isalpha(int c);
/**
 * print_sign - prints a sign based on n
 * @n: integer to input
 * Return: 1 or 0  or -1
 */
int print_sign(int n);
/**
 * _abs - gives absolute value
 * @int: integer
 * Return: integer or abs value of int
 */
int _abs(int);
/**
 * print_last_last - prints digit last
 *
 * @int: integer to input
 *
 * Return: last digit of integer
 *
 */
int print_last_digit(int);
void jack_bauer(void);
void times_table(void);
int add(int, int);
void print_to_98(int n);
void print_times_table(int n);

#endif
