#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node in a listint_t linked list.
 * @head: pointer to the head of the list.
 * @index: index of the node that should be deleted, starting at 0.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *current = *head;
	listint_t *previous = NULL;

	if (head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}

	for (i = 0; current != NULL && i < index; i++)
	{
		previous = current;
		current = current->next;
	}

	if (current != NULL)
	{
		previous->next = current->next;
		free(current);
		return (1);
	}
	else
	{
	return (-1);
	}
}

