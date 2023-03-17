#include "main.h"

/**
 * int _pow_recursion - this function returns the value of x raised to the power of y
 *
 * @r: the base condition
 *
 * return: (r).
 */

int _pow_recursion(int x, int y)
{
if (y == 0)
{
return (1);
}
else if (y < 0)
{
return (-1);
}
else
{
return  x * _pow_recursion(x, y - 1);
}
}
