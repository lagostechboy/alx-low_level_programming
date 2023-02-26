#include "main.h"

/**
 *positive_or_negative - checks for the positive or negative number
 *
 * @i - the number to be checked
 *
 * Return: always 0
 */

void positive_or_negative(int i)
{
if (i < 0)
printf("'%d\n' is negative\n", i);
else if (i > 0)
printf("'%d' is positive\n", i);
else
printf("'%d' is positive\n", i);
}
