/* File: int_index.c */

#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array
 * @array: Array to be searched
 * @size: Number of elements in the array
 * @cmp: Pointer to the function to be used to compare values
 *
 * Return: Index of the first element for which the cmp function does not return 0, -1 if no element matches or size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
    if (array != NULL && cmp != NULL && size > 0)
    {
        for (int i = 0; i < size; i++)
        {
            if (cmp(array[i]) != 0)
            {
                return i;
            }
        }
    }
    return -1;
}
