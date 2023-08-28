#include "lists.h"
/**
  *delete_nodeint_at_index -  a function that deletes
  *the node at index index
  *@head: ptr to first node
  *@index: is the index of the node that should be deleted
  *Return: 1 if it succeeded, -1 if it failed
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int a;
	listint_t *temp;
	listint_t *new_n;

	temp = *head;
	if (head == NULL || *head == NULL)
		return (-1);
	for (a = 0; a < index - 1 && temp != NULL && index != 0; a++)
		temp = temp->next;
	if (temp == NULL)
		return (-1);
	if (index == 0)
	{
		new_n = temp->next;
		free(temp);
		*head = new_n;
	}
	else
	{
		if (temp->next == NULL)
			new_n = temp->next;
		else
			new_n = temp->next->next;
		free(temp->next);
		temp->next = new_n;
	}
	return (1);
}
