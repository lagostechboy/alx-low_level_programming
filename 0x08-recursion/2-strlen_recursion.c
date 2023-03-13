#include "main.h"

/**
 * _strlen_recursion - this function returns the length of a string character
 *
 * @s: the string character measuremen
 * @i: intialize a counter variable
 *
 * return: the length of the string.
 */

int _strlen_recursion(char *s)
{
int i = 0;
if (*s)
{
i++;
i += _strlen_recursion(s + 1);
}
return (i);
}
