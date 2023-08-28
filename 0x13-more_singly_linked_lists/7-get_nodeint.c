#include "lists.h"
/**
  *get_nodeint_at_index - a function that returns the nth node of a
  *linked list
  *@head: ptr to first node of list
  *@index: is the index of the node, starting at 0
  *Return: ptr to index
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
