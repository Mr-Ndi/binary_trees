#include "lists.h"
#include <stdlib.h>
/**
  *pop_listint - freeing a list
  *@head: pointer to the start of the list
  *Return: removed integer
  */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int i;

	if (!head || !*head)
		return (0);

	i = (*head)->n;

	tmp = *head;
	*head = (*head)->next;
	free(tmp);
	return (i);
}
