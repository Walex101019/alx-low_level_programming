#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list that can have a loop
 * @h: pointer to the head of the list
 *
 * Return: the size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *tmp, *loop, *start;
	void *addr[100];

	if (h == NULL || *h == NULL)
		return (0);
	start = *h;
	loop = find_listint_loop(start);
	while (*h)
	{
		tmp = (*h)->next;
		count++;
		free(*h);
		if (*h == loop)
			break;
		*h = tmp;
	}
	if (loop)
	{
		start = loop;
		do {
			tmp = start->next;
			for (count = 0; addr[count]; count++)
			{
				if (addr[count] == start)
				{
					*h = NULL;
					return (count);
				}
			}
			addr[count] = start;
			free(start);
			start = tmp;
		} while (start != loop);
	}
	*h = NULL;
	return (count);
}

/*
* find_listint_loop - finds the loop in a linked list
* @head: pointer to the head of the list
*
* Return: the address of the node where the loop starts
*/
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow, *fast;

	if (head == NULL)
		return (NULL);
	slow = fast = head;
	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
			return (slow);
	}
	return (NULL);
}

