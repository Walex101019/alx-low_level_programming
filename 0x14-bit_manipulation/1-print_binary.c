#include "main.h"
#include <stdio.h>
/**
 * print_binary - entry point
 * @n: decimal number to print as binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int tem;
	int shift;

	if (n == 0)
	{
		printf("0");
		return;
	}
	for (tem = n, shift = 0; (tem >>= 1) > 0; shift++)
		;
	for (; shift >= 0; shift--)
	{
		if ((n >> shift) & 1)
			printf("1");
		else
			printf("0");
	}
}
