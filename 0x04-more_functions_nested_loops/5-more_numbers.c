#include "main.h"
/**
 * more_numbers - Prints numbers 10 times
 *
 * Return: Returns void
 */
void more_numbers(void)
{
	int j;
	int x;

	for (j = 0; j < 10; j++)
	{
		for (x = 0; x <= 14; x++)
		{
			if (x > 9)
			{
				_putchar((x / 10) + '0');
			}
			_putchar((x % 10) + '0');
		}
		_putchar('\n');
	}
}
