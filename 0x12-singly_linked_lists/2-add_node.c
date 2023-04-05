#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * add_node - function add new node to begining of list_t
 * @head: pointer to the structure
 * @str: rep a string
 * Return: this is the adrres of new element
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *new;
unsigned int count = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->str = strdup(str);
	while (str[count] != '\0')
	{
		count++;
	}
	new->len = count;
	if (*head != NULL)
		new->next = *head;
	if (*head == NULL)
		new->next = NULL;
	*head = new;
	return (*head);
}
