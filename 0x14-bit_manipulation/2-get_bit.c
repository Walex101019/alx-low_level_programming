#include "main.h"
#include <stdio.h>
/**
 * get_bit - ENtry point
 * @n: arguement for number to evaluate
 * @index: arguement of index starting from 0
 * Return: Returns
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int grip;

	if (index > 64)
		return (-1);
	grip = n >> index;
	return (grip & 1);
}
