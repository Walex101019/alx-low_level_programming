#include "main.h"
/**
 * main - Entry point
 *
 * print_alphabet - prints alphabet in lower case 10 times.
 *
 * void print_alphabet void: specifies the function doesn't return a value.
 */
void print_alphabet(void)
{
	char letter;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
