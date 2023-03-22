/* File: array_iterator.c */

#include "function_pointers.h"

/**
 * array_iterator - Executes a function on each element of an array
 * @array: Array to be iterated over
 * @size: Size of the array
 * @action: Function pointer to a function that takes an int as argument and returns void
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
    if (array != NULL && action != NULL)
    {
        for (size_t i = 0; i < size; i++)
        {
            action(array[i]);
        }
    }
}
