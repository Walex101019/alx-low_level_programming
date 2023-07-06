#include "main.h"
/**
 * _pits_recursion - Entry point
 *
 * @s: parameter passed in
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	s++;
	_puts_recursion(s);
}
