#include "main.h"

/**
 * void times_table(void) - function print the 9x table
 *
 * @i, @j: variable to increment and counter increment
 *
 * return: (0) always
 */

void times_table(void)
{
int i, j;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 10; j++)
{
_putchar("%d x %d = %d, ", i, j, i * j);
}
_putchar("\n");
}
}
