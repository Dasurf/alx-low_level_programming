#include "lists.h"

/**
 * free_list - a function that frees single list link
 *
 * @head: a pointer to the first node of the list
 *
 * Return: returns nothing
*/
void free_list(list_t *head)
{
	list_t *current;

	while ((current = head) != NULL)
	{
		head = head->next;
		free(current->str);
		free(current);
	}
}
