#include <unistd.h>
int _putchat(char c)
{
	return write(1, &c, 1);
}
