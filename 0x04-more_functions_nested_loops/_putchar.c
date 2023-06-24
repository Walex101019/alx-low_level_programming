#include <unistd.h>
/**
 *  _putchar - writes a character
 *
 *  @c: The character to be written
 *
 *  Return: return success
 */
int _putchar(char c)
{
	return write(1, &c, 1);
}
