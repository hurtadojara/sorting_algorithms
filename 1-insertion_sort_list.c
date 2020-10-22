#include "sort.h"
/**
* swap_nodes - make a swap between two nodes.
* @n_1: Pointer to f node.
* @n_2: Pointer to s node.
* Return: nothing
*/
void swap_nodes(listint_t *n_1, listint_t *n_2)
{
	if (n_1->prev != NULL)
		n_1->prev->next = n_2;
	if (n_2->next != NULL)
		n_2->next->prev = n_1;
	n_1->next = n_2->next;
	n_2->prev = n_1->prev;
	n_1->prev = n_2;
	n_2->next = n_1;
}
/**
* insertion_sort_list - Function to sort nodes.
* @list: Pointer to l list
* Return: Nothing.
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *temporal, *temporal2;

	if (!list || !(*list) || (!((*list)->prev) && !((*list)->next)))
		return;
	temporal = (*list)->next;
	while (temporal != NULL)
	{
		temporal2 = temporal, temporal = temporal->next;
		while (temporal2 && temporal2->prev != NULL)
		{
			if (temporal2->prev->n > temporal2->n)
			{
				swap_nodes(temporal2->prev, temporal2);
				if (temporal2->prev == NULL)
					*list = temporal2;
				print_list((const listint_t *)*list);
			}
			else
				temporal2 = temporal2->prev;
		}
	}
}
