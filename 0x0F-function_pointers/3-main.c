#include "3-calc.h"
#include <stdio.h>

/**
 * main - performs simple operations
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 if successful, otherwise 98, 99, or 100
 */
int main(int argc, char **argv)
{
    int num1, num2, result;
    int (*op_func)(int, int);

    if (argc != 4)
    {
        printf("Error\n");
        return (98
