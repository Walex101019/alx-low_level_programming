#include "main.h"
/**
 * factorial - Entry point
 *
 * @n : parameter passed
 *
 * Return: returns -1, 0
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n <= 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
