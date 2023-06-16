#include "lists.h"

/**
 * dlistint_len - this func returns length of a linked list
 * @h: pointer to the head of the list
 *
 * Return: no of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (count);

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
