#include "main.h"

/**
 * puts2 - this function print every other character
 *
 * @str: string placeholder
 *
 * Return: Always 0
 */

void puts2(char *str)
{
int i = 0;

while (str[i] != '\0')
{
_putchar(str[i]);
i += 2;
}
_putchar('\n');
str[i] = '\0';
}
