#include "main.h"
/* More headers go here */

/**
 * print_numbers - prints from 0 to 9
 *
 * Return: Nothing
 */

void print_numbers(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
		_putchar(n);
	_putchar('\n');
}
