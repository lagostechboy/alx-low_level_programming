#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - function adds a new node at the end
 * of a list_t list.
 * @head: this is the head of the linked list.
 * @str: rep string to store in the list.
 * Return: address of the head.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newN, *temp;
	size_t nchar;

	newN = malloc(sizeof(list_t));
	if (newN == NULL)
		return (NULL);

	newN->str = strdup(str);

	for (nchar = 0; str[nchar]; nchar++)
		;

	newN->len = nchar;
	newN->next = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = newN;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = newN;
	}

	return (*head);
}
