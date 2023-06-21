#include "main.h"
/**
 * void prints alphabet in small letter \n
 * print_alphabet: prints alphabet in small letter \n
 * 
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
