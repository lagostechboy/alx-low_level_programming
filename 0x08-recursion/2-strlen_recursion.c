#include "main.h"

/**
 * _strlen_recursion - this function returns the length of a string character
 *
 * @s: takes input
 * @i: intialize a counter variable
 *
 * return: i;
 */

int _strlen_recursion(char *s)
{
int i = 0;
if (*s != '\0')
{
i++;
i += _strlen_recursion(s + 1);
}
return i;
}
