#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_nodeint_end - a function that adds an element at the ens of a
 * singly linked list
 * @head: a pointer to a pointer
 * @n: the character used
 * Return: Always 0 success
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *last;


	new_node  = malloc(sizeof(listint_t));
	if (new_node  == NULL)
		return (NULL);
	new_node->n = n;

	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	last  = *head;
	while (last->next != NULL)
		last  = last->next;
	last->next = new_node;
	return (new_node);
}
