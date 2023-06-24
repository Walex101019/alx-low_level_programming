#include <stdio.h>
/**
 * Main - Entry point
 *
 * Return: Returns 0
 *
 */
int main(void)
{
	int x;

	for (x >= 1; x <= 100; x++)
    	{
		if (x % 3 == 0)
		{
			printf("Fizz\t");
		}
		else if (x % 5 == 0)
		{
			printf("Buzz\t");
		}
		else if (x % 3 == 0 && x % 5 == 0)
		{
			printf("FIzzBuzz\t");
		}
		else
		{
			printf("%d\t", x);
		}
	}
	printf('\n');
	return (0);
}
}
