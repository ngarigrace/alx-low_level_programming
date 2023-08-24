#include "lists.h"
int len(const char *str);
/**
  *add_node - a func that adds a node to the beginning of list
  *@head: ptr to head of list
  *@str: str to be insterted to first position
  *Return: ptr to first node
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);


	if (*head == NULL)

		new_node->next = NULL;

	else
			new_node->next = *head;
		new_node->str = strdup(str);
		new_node->len = len(str);
		*head = new_node;
	return (*head);
}
/**
  *len - a func to get leng of str
  *@str: str to get its length
  *Return: leng of str
  */
int len(const char *str)
{
	int a;

	if (str == NULL)
		return (0);
	a = 0;

	while (str[a] != '\0')
	{
		a++;
	}
	return (a);
}
