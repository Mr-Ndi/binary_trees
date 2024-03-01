#include "lists.h"
#include <stdlib.h>
/**
  *add_nodeint_end - adding a node at the end
  *@head: pointer to the start of the list
  *@n: a n to with which to form a new node
  *Return: pointer to a node
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *tmp;

	ptr = (listint_t *) malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = NULL;
	if (*head == NULL)
		*(head) = ptr;
	else
	{
		tmp = *(head);
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = ptr;
	}
	return (ptr);
}
