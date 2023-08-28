#include "lists.h"
/**
  *listint_len - a func that counts no of elements in alist
  *@h: head ptr
  *Return: no of elements
  */
size_t listint_len(const listint_t *h)
{
	size_t c;

	if (h == NULL)
		return (0);
	for (c = 0; h != NULL; c++)
	{
		h = h->next;
	}
	return (c);
}
