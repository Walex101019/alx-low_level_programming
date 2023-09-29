#include "main.h"
#include <stdio.h>

/**
 * flip_bits - Entry point for flip bits
 * @n: arguement for first number
 * @m: arguement for second number convertion
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff;
	int counter;

	diff = n ^ m;
	counter = 0;

	while (diff)
	{
		counter++;
		diff &= (diff - 1);
	}
	return (counter);
}
