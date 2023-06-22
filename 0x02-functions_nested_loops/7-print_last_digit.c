#include "main.h"
/**
 * print_last_digit - Entry point
 *
 * @n: integer passed in param
 *
 * Return: returns value of last digit
 */
int print_last_digit(int n)
{
	int x = n % 26;
	if (x > 0)
	{
		x = x * -1;
	}
	_putchar(x + '0');
	return (x);
}
