#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Entry point.
 *
 * @n: number passed in
 *
 * Return: void return
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		if (n > 98)
		{
			n--;
		}
		else
		{
			n++;
		}
		printf("%d, ", n);
	}
	printf("%d\n", n);
}
