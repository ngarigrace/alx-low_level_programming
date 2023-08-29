#include "lists.h"
/**
  *find_listint_loop - a func that finds aloop in a list
  *@head: head of list
  *Return: addres of node where loop starts
  */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *a;
	listint_t *pre;

	a = head;
	pre = head;

	while (head && a && a->next)
	{
		head = head->next;
		a = a->next->next;

		if (head == a)
		{
			head = pre;
			pre = a;
			while (1)
			{
				a = pre;
				while (a->next != head && a->next != pre)
				{
					a = a->next;
				}
				if (a->next == head)
					break;
				head = head->next;
			}
			return (a->next);
		}
	}
	return (NULL);
}
