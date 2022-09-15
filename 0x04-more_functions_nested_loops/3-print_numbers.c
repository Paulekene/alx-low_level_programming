#include "main.h"

/**
 * print_numbers - Print numbers between 0 through 9 using ASCII values
 *
 * Return: void
 */
void print_number(void)
{
	for (int c = 48; c < 58; c ++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
