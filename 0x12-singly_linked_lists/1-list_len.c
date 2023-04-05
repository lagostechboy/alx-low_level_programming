#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * list_len -  function that returns the number of elements
 *
 * @h: A pointer to the first node of the list.
 *
 * Return: counts of elements
 */

size_t list_len(const list_t *h)
{
size_t counter = 0;
const list_t *ftp = h;

while (ftp != NULL)
{
counter++;
ftp = ftp->next;
}
return (counter);
}
