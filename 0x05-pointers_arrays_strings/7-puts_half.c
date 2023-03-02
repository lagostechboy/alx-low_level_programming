#include "main.h"
#include <string.h>

/**
 * puts_half - a function that prints half of a string
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
int length = strlen(str);
int half = length % 2 == 0 ? length / 2 : (length + 1) / 2;
int i;

for (i = half; i < length; i++){
_putchar(str[i]);
}

_putchar('\n');
}
