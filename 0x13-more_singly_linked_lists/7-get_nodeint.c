#include "lists.h"

/**
 * get_nodeint_at_index - get node at nth *index from a linked list
 *
 * @head: pointer to the first node of the list
 * @index: number of node to access
 *
 * Return: node at nth index OR NULL if node doesn't exist
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t i;

	for (i = 0; i < index && head != NULL; i++)
		head = head->next;

	return (head);
}
