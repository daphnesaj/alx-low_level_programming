#include "main.h"
/* More headers go here */

/**
 *main - prints "_putchar"
 *
 * Return: always 0
 */

void print_alphabet(void)
{
	char alpha[] = "abcdefghijklmnopqrstuvwxyz";
	
	int i;
	
	for (i = 0; i < 26; i++)
		_putchar(alpha[i]);
	_putchar('\n');
}
