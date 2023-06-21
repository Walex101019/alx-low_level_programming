#include "main.h"
/**
 * main - Entry point
 *
 * print_alphabet: prints alphabet in lower case followed by new line.
 *
 * Return: Always 0 (Success)
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
