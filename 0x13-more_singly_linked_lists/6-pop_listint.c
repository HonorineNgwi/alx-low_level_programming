#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: linked list
 * Return: 0 if the linked list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (head == NULL)
	{
		return (0);
	}
	tmp = *head;
	n = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (n);
}
