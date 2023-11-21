#include "lists.h"

/**
 * print_listint - A function that prints all elements of a list
 *
 * @h: pointer to the first node
 *
 * Return: number of nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t nodeCount = 1;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		printf("%d\n", h->n);

		h = h->next;
		nodeCount++;
	}

	printf("%d\n", h->n);

	return (nodeCount);
}
