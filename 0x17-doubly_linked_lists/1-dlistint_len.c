#include "lists.h"

/**
 * dlistint_len - shu print number of elements in a linked dlistint_t list
 * @h:head pointer to the list
 * Return: the  number of elements in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
