#include "main.h"
#include <stdio.h>
/**
 * clear_bit - Entry point to clear bit
 * @n: arguement for decimal number to change
 * @index: argueent passed for index position to change
 * Return: Returns 1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;
	unsigned int grip;

	if (index > 64)
		return (-1);
	grip = index;
	for (i = 1; grip > 0; i *= 2, grip--)
		;
	if ((*n >> index) & 1)
		*n -= i;
	return (1);
}
