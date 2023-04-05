#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * print_list - Prints all the elements of a linked list.
 *
 * @h: A pointer to the first node of the list.
 *
 * Return: The number of nodes in the list.
 */

size_t print_list(const list_t *h)
{
size_t num = 0;

/* Loop through the list, printing each node */
while (h != NULL)
{
if (h->str == NULL)
{
printf("[0] (nil)\n");
}
else
{
printf("[%d] %s\n", h->len, h->str);
}

num++;  /* Increment the count of nodes printed */
h = h->next;  /* Move to the next node in the list */
}
return (num);
}
