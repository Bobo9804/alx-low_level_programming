#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i;

    for (i = 0; i < 10; i++)
    {
        _putchar(i + '0'); // use _putchar function to print the digits 0-9
    }

    _putchar('\n'); // add a newline character at the end of the output

    return (0);
}
