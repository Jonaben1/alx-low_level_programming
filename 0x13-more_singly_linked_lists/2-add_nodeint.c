#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * add_nodeint - a function  that adds a new node at the end
   of the beginning of a listint_t list
 * @n: the character being used
 * @head: a pointer to a pointer
 * Return: Always 0 success
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	new_node->n = n;
	new_node->next  = (*head);
	(*head) = new_node;
	if (new_node  == NULL)
		return (NULL);
	return (new_node);
}



