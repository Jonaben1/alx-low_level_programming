#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *  print_listint - a function that prints all the elements in a linked list
 * @h: pointer to elements of the list
 * Return: Always 0 success
 */

size_t print_listint(const listint_t *h)
{
	int count;

	if (h == NULL)
	{
		return (0);
	}
	for (count = 0; h != NULL; count++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
