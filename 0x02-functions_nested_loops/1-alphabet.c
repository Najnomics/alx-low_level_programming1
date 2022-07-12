#include "main.h"
/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line
 */
void print_alphabet(void)
{
	char wv;

	wv = 'a';

	while (wv <= 'z')
	{
		_putchar(wv);
		wv++;
	}

	_putchar('\n');
}
