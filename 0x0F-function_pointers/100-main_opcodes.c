#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the opcodes of its own main function.
 * @argc: The number of arguments.
 * @argv: Array of argument strings.
 *
 * Return: Always 0 (Success).
 */
int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Error\n");
        return 1;
    }

    int num_bytes = atoi(argv[1]);

    if (num_bytes < 0)
    {
        printf("Error\n");
        return 2;
    }

    unsigned char *ptr = (unsigned char *)main;

    for (int i = 0; i < num_bytes; i++)
    {
        printf("%02x", *ptr);
        ptr++;
        if (i < num_bytes - 1)
            printf(" ");
    }

    printf("\n");

    return 0;
}
