#include "lists.h"
/**
 *free_listint - free the memory used
 *@head:
 *Return:
 */
void free_listint(listint_t *head)
{
	listint_t *freed, *next;

	freed = head;

	while (freed != NULL)
	{
		next = freed->next;
		free(freed);
		freed = next;
	}
}
