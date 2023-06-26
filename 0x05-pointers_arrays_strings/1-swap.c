#include "main.h"
/**
 * swat_int - Entry point
 *
 * @a: parameter passed
 *
 * @b: arguement passed
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int aux;
	aux = *a;
	*a = *b;
	*b = aux;
}
