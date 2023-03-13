#include "main.h"

/**
 * _strlen_recursion - this function returns the length of a string character
 *
 * @s: takes input
 * @i: intialize a counter variable
 * @p: take on each character until the '\0'
 *
 * return: i;
 */

int _strlen_recursion(char *s)
{
int i = 0;
char *p = s;
while (*p != '\0')
{
i++;
p++;
}
return i;
}
