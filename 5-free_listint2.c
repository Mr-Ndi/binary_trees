#include "lists.h"
#include <stdlib.h>
/**
  *free_listint2 - freeing a list
  *@head: pointer to the start of the list
  *Return: nothing
  */
void free_listint2(listint_t **head)
{
	listint_t *ptr;
	listint_t *tmp;

	if (!head)
		return;
	ptr = *head;

	while (ptr != NULL)
	{
		tmp = ptr->next;
		free(ptr);
		ptr = tmp;
	}
	*head = NULL;
}
