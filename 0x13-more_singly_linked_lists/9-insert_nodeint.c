#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a listint_t linked list.
 * @head: pointer to the head of the list.
 * @idx: index of the list where the new node should be added, starting at 0.
 * @n: data to be stored in the new node.
 *
 * Return: the address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *current = *head;
	listint_t *new_node;

	if (head == NULL)
	{
	return (NULL);
	}

	if (idx == 0)
	{
		return (add_nodeint(head, n));
	}

	for (i = 0; current != NULL && i < idx - 1; i++)
	{
	current = current->next;
	}

	if (i == idx - 1 && current != NULL)
	{
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = current->next;
	current->next = new_node;
	return (new_node);
	}
	else
	{
		return (NULL);
	}
}

