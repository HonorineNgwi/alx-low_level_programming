#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns then number of elements in a list.
 * @h: singly linke lists.
 * Return: the number of nodes/elements in the list.
 */
size_t list_len(const list_t *h)
{
	size_t number_of_nodes;

	number_of_nodes = 0;

	while (h != NULL)
	{
		h = h->next;

		number_of_nodes++;
	}
	return (number_of_nodes);
}
