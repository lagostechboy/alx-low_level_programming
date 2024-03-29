/**
 * _strlen_recursion - Calculates the length of a string using recursion.
 *
 * @s: A pointer to the string whose length is to be calculated.
 *
 * Return: The length of the string.
 */

#include "main.h"

int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}

return (1 + _strlen_recursion(s + 1));
}
