#include "main.h"
/**
 * _strlen - ENtry point
 *
 * @s: parameter passed
 *
 * Return: returns c
 */
int _strlen(char *s)
{
	int c = 0;

	for (c = 0; *s != '\0'; s++)
	{
		c++;
	}

	return (c);
}
