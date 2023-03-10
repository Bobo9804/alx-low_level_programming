#include <stddef.h>

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to the memory area to fill
 * @b: the byte to fill the memory area with
 * @n: number of bytes to fill
 *
 * Return: a pointer to the filled memory area @s
 */
void *_memset(void *s, int b, size_t n)
{
        unsigned char *p = s;
        size_t i;

        for (i = 0; i < n; i++)
                p[i] = (unsigned char) b;

        return s;
}
