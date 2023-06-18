/*
 * _strlen_recursion - Calculates the length of a string using recursion.
 * 
 *@s: A pointer to the string whose length is to be calculated.
 * 
 * Returns: The length of the string.
 */

#include "main.h"

int _strlen_recursion(char *s) {
    int i = 0;

   while (*s != '\0') {
        s++;
        i++;
    }

    return i;
}
