#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at a given position in a doubly linked list
 * @head: Pointer to the head of the list
 * @index: Index of the node to delete
 *
 * Return: 1 if successful, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *temp;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}

	current = *head;
	for (i = 0; i < index - 1; i++)
	{
		current = current->next;
		if (current == NULL)
			return (-1);
	}

	temp = current->next;
	if (temp == NULL)
		return (-1);

	current->next = temp->next;
	if (temp->next != NULL)
		temp->next->prev = current;
	free(temp);

	return (1);
}
