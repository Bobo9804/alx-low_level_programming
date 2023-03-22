#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints opcodes of its own main function
 * @argc: number of arguments passed to the function
 * @argv: pointer to an array of pointers containing arguments passed
 * Return: 0 on success, 1 on failure
 */
int main(int argc, char *argv[])
{
  int i, bytes;
  unsigned char *ptr;

  if (argc != 2)
  {
    printf("Error\n");
    return 1;
  }

  bytes = atoi(argv[1]);
  if (bytes < 0)
  {
    printf("Error\n");
    return 1;
  }

  ptr = (unsigned char *)main;
  for (i = 0; i < bytes; i++)
  {
    printf("%02x", *(ptr + i));
    if (i == bytes - 1)
      printf("\n");
    else
      printf(" ");
  }
  return 0;
}
