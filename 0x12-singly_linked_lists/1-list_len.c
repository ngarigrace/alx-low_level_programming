#include "lists.h"
/**
  *list_len - leng of list
  *@h: pointer to first node
  *Return: no ofnodes
  */
size_t list_len(const list_t *h)
{
	int a;

	if (h == NULL)
		return (0);
	for (a = 1; h->next != NULL; a++)
	{
		h = h->next;
	}
	return (a);
}
