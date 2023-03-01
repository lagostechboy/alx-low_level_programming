#include "main.h"

/**
 * int _strlen - this function return the length of a string
 *
 * @len - integer to iterate to get string count
 * @s - integer to work as a couter
 *
 * Return: len;
 */
int _strlen(char *s)
{
  int len = 0;
  char str;
  str = *s;
  while (*s != '\0' && str)
    {
      len++;
      s++;
    }
  return len;
}
