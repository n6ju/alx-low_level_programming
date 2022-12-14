#include "main.h"


/**
 * print_alphabet - make the alphabet
 *
 * Return: 0
 */

void print_alphabet(void)

{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}

	putchar('\n');
}
