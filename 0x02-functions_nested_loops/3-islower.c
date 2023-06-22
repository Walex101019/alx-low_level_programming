#include "main.h"
/**
 * _islower - Entry point
 *
 * @c: number to pass to _islower function
 *
 * Return: 0 or 1 (Success)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1); /*If true  c is lowercase*/
	}
	return (0); /*This means otherwise*/
}
