#include "main.h"

/**
 * swap_int - takes the value of two integers and swap them
 *
 * @a - integer to swap
 * @b - integer to swap
 *
 *Return: Always 0.
 */
void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
}
