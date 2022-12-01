#include "lists.h"

/**
 * add_nodeint - add a new node at the beginning
 * @head: head of a list
 * @n: n element
 *
 * Description: adds a new node at the beginning of a linked list
 * Return: Address of the new element. NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp = (listint_t *)malloc(sizeof(listint_t));

	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = *head;
	*head = temp;

	return (*head);
}
