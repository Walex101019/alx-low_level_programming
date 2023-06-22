#include "main.h"
/**
 * print_alphabet -  Entry level
 *
 * Return: void return nothing
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
