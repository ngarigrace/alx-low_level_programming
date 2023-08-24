#include "lists.h"
/**
  *add_node_end - a func that adds a new node
  *at the end of linked list
  *@head: ptr to first node
  *@str: str toput in new node
  *Return: new node
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *temp = *head;
	size_t len = 0;

	while (str[len])
		len++;
	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = new_node;

	return (new_node);
}
