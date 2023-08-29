#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the head of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *slow, *fast, *loop;

	if (head == NULL)
		return (0);

	slow = fast = head;
	loop = NULL;
	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			loop = slow;
			break;
		}
	}

	slow = head;
	if (loop)
	{
		while (slow != fast)
		{
			slow = slow->next;
			fast = fast->next;
		}
	}
	while (head)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		count++;
		if (head == loop)
			break;
		head = head->next;
	}

	if (loop)
		printf("-> [%p] %d\n", (void *)loop, loop->n);

	return (count);
}
