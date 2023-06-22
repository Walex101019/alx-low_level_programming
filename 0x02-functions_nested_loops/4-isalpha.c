#include "main.h"
/**
 * _isalpha - Entry level
 *
 * @c: The character checked
 *
 * Return: 1 (success) or 0 (failure)
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);

}
