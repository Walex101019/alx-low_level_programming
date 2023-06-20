#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;
	int i;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	for (i = 0; i < 26; i++)
	{
		letter = 'A' + i;
		putchar(letter);
	}
	return (0);
}
