#include "main.h"

/**
 * print_rev_recursion - Prints a string in reverse using recursion.
 * @s: The string to be printed.
 */
void print_rev_recursion(char *s)
{
if (*s == '\0')
{
return;
}

print_rev_recursion(s + 1);

_putchar(*s);
}