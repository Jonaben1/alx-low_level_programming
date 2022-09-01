#include "lists.h"

/**
 * dlistint_len  - a function that returns the>
 * number of elements in a linked list
 * @h: the node head
 * return: number of node (success)
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t length = 0;

	while(h != NULL)
	{
		h = h->next;
		length++;
	}
	return (length);
}
