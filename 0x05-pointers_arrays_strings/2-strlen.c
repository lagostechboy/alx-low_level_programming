#include "main.h"

/**
 * _strlen - this function return the length of a string
 *
 * @s:  pointer to take string value and increment
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
return (len);
}
