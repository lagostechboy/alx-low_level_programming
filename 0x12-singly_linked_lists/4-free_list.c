#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * free_list - function that frees a list.
 * @head: rep a list that enters to the function.
 */
void free_list(list_t *head)
{
list_t *tempp;

	tempp = head;
	while (tempp != NULL)
	{
		free(tempp->str);
		free(tempp);
		tempp = tempp->next;
	}
}
