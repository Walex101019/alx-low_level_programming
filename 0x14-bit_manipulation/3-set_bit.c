#include "main.h"
/**
 * set_bit - Entry point to set value of a bit
 * @n: arguement for decimal number passed
 * @index: arguement for index position to change
 * Return: Returns
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int p;

	if (index > 64)
		return (-1);
	for (p = 1; index > 0; index--, p *= 2)
		;
	*n += p;
	return (1);
}
