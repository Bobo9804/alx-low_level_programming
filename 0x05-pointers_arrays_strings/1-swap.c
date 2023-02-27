#include "main.h"x
/**
 * swap_int - swaps the values of two integers
 * @a: a pointer to the first integer
 * @b: a pointer to the second integer
 *
 * This function swaps the values of the integers pointed to by a and b.
 */
void swap_int(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
