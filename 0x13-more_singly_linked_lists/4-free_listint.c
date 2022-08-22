#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - frees a linked list
 * @head: head of the linked list
 * Return: 0
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
