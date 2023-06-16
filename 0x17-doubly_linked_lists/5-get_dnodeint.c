#include "lists.h"

/**
 * get_dnodeint_at_index - this func gets a node at a index
 * @head: pointer to the head of the list
 * @index: index of the node to return
 *
 * Return: node at a index or NULL if node doesn't exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int a;

	current = head;
	a = 0;
	while (current != NULL)
	{
		if (a == index)
			return (current);
		current = current->next;
		a++;
	}
	return (NULL);
}
