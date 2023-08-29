#include "lists.h"
/**
  *free_list2 - frees alinked list
  *@head: head of list
  *Return: void
  */
void free_list2(list_t **head)
{
	list_t *temp;
	list_t *cur;

	if (head != NULL)
	{
		cur = *head;
		while ((temp = cur) != NULL)
		{
			cur = cur->next;
			free(temp);
		}
		*head = NULL;
	}
}
/**
  *free_listint_safe - frees linked list
  *@h: head ptr
  *Return: size of list that was freed
  */
size_t free_listint_safe(listint_t **h)
{
	size_t nodes = 0;
	list_t *hp, *new, *add;
	listint_t *cur;

	hp = NULL;
	while (*h != NULL)
	{
		new = malloc(sizeof(list_t));

		if (new == NULL)
			exit(98);
		new->p = (void *)*h;
		new->next = hp;
		hp = new;

		add = hp;

		while (add->next != NULL)
		{
			add = add->next;
			if (*h == add->p)
			{
				*h = NULL;
				free_list2(&hp);
				return (nodes);
			}
		}
		cur = *h;
		*h = (*h)->next;
		free(cur);
		nodes++;
	}
	*h = NULL;
	free_list2(&hp);
	return (nodes);
}
