#include <stdio.h>
#include <stdlib.h>
#include "lists.h" // Include the necessary header file

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

/**
 * print_listint_safe - Print a linked list and handle loops
 * @head: Pointer to the head of the linked list
 * Return: Number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
    const listint_t *slow, *fast;
    size_t count = 0;

    slow = head;
    fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        printf("[%p] %d\n", (void *)slow, slow->n);
        count++;

        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
        {
            printf("[%p] %d\n", (void *)slow, slow->n);
            count++;
            printf("-> [%p] %d\n", (void *)fast->next, fast->next->n);
            count++;
            break;
        }
    }

    while (head != fast)
    {
        printf("[%p] %d\n", (void *)head, head->n);
        count++;
        head = head->next;
        fast = fast->next;
    }

    return count;
}
