#include <unistd.h>
#include <string.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	const char message1[] = "and that piece of art is useful\"";
	const char message2[] = " - Dora Korpar, 2015-10-19\n";

	write(2, message1, strlen(message1));
	write(2, message2, strlen(message2));
	return (1);
}
