#include "lists.h"
/**
  *free_list - free a list
  *@head: head of lst
  *Return: void
  */
void free_list(list_t **head)
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
  *print_listint_safe - a function that prints a listint_t linked list
  *@head: ptr to first node
  *Return: no of nodes in list
  */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0;
	list_t *hp, *new, *add;

	hp = NULL;
	while (head != NULL)
	{
		new = malloc(sizeof(list_t));

		if (new == NULL)
			exit(98);
		new->p = (void *)head;
		new->next = hp;
		hp = new;
		add = hp;

		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_list(&hp);
				return (nodes);
			}
		}
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nodes++;
	}
	free_list(&hp);
	return (nodes);
}
