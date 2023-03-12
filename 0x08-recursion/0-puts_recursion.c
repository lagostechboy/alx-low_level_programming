#include "main.h"

/**
 * _puts_recursion - this function prints just like puts();
 *
 * @s: the input 
 *
 * return: string;
 */

void _puts_recursion(char *s)
{
if (*s != '\0')
{
_putchar(*s);
_puts_recursion(s + 1);
}
else
_putchar('\n');
}
