#include "main.h"
#include <stdio.h>

/**
 * factorial - produce the factorial of a given number
 *
 * @n: number used to return the factorial
 *
 * Return: 0;
 */

int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
else
{
return (n * factorial(n - 1));
}
}
