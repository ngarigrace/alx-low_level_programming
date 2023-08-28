#include "lists.h"
/**
  *create_new_node - a func that creates a new node
  *@n: data of n node
  *Return: ptr ton node
  */
listint_t *create_new_node(int n)
{
	listint_t *new_n;

	new_n = malloc(sizeof(listint_t));
	if (new_n == NULL)
		return (NULL);
	new_n->n = n;
	new_n->next = NULL;
	return (new_n);
}

/**
  *insert_nodeint_at_index -  a function that inserts
  *a new node at a given position
  *@head: ptr to first node
  *@idx: is the index of the list where the new node should be added
  *@n: data of new n
  *Return: the address of the new node
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int a;
	listint_t *temp;
	listint_t *temp_old;
	listint_t *new_n;

	temp = *head;
	if (head == NULL)
		return (NULL);
	new_n = create_new_node(n);
	if (new_n == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = new_n;
		return (new_n);
	}
	if (idx == 0)
		*head = new_n;
	for (a = 0; a < idx - 1 && temp != NULL && idx != 0; a++)
		temp = temp->next;
	if (temp == NULL)
		return (NULL);
	if (idx == 0)
		new_n->next = temp;
	else
	{
		temp_old = temp->next;
		temp->next = new_n;
		new_n->next = temp_old;
	}
	return (new_n);
}

