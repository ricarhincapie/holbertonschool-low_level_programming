#include "lists.h"

/**
 * get_nodeint_at_index - Go to a node for it's index
 * @head: pointer to the header of the list
 * @index: Index of the node to be returned
 * Return: Address of the node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter;

	counter = 0;

	while (counter < index)
	{
		head = head->next;
		if (head->next == NULL)
			return (NULL);
		counter++;
	}
return (head);
}
