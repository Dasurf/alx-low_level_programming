#include "lists.h"

/**
 * add_nodeint_end - A function that adds a new node
 *            to the end of the node
 *
 * @head: pointer to the first node of the list
 * @n: int data to add to new node
 *
 * Return: address of the new element or NULL if it fails
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	temp = *head;

	if (temp == NULL)
		*head = new;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;

		temp->next = new;
	}

	return (*head);
}
