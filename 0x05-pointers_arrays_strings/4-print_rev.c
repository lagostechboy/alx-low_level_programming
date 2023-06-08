#include "main.h"

/**
 * print_rev - funtion to print a string in reverse
 *
 * @s: string
 *
 * return: Always 0.
 */

void print_rev(char *s)
{
int len = 0;
int i;


while (*s != '\0')
{
len++;
s++;
}
s--;
for (i = len - 1; i >= 0; i--)
{
_putchar(*s);
s--;
}
_putchar('\n');
}
