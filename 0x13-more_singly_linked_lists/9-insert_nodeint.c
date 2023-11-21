#include "lists.h"

/**
 * insert_nodeint_at_index - A function that inserts a new node at
 *                           a given position
 *
 * @head: pointer to the first node of the list
 * @idx: i of the list where the new node should be added
 * @n: element to add to the new node
 *
 * Return: NULL if anything fails or the address of the new node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *current;
	size_t i;

	current = *head;

	new = malloc(sizeof(listint_t));
	if ((*head == NULL && idx != 0) || new == NULL)
		return (NULL);

	new->n = n;

	for (i = 0; head != NULL && i < idx - 1; i++)
	{
		current = current->next;
		if (current == NULL)
			return (NULL);
	}

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else if (current->next)
	{
		new->next = current->next;
		current->next = new;
	}
	else
	{
		new->next = NULL;
		current->next = new;
	}

	return (new);
}
