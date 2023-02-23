#include <stdio.h>

/**
 * main - finds and prints the largest prime factor of 612852475143
 *
 * Return: Always 0.
 */
int main(void)
{
    long int n = 612852475143, i = 2;

    while (n > i)
    {
        if (n % i == 0)
            n /= i;
        else
            i++;
    }

    printf("%ld\n", n);

    return (0);
}
