#include "sort.h"

/**
 *swap_one_node - swap one node with the previous one
 *@node: the current node
 *@list: double linked list of nodes
 *Return: return a pointer to recent node in place
 */
listint_t *swap_one_node(listint_t **list, listint_t *node)
{
	listint_t *previ = node->prev, *current = node;

	previ = node->prev;
	current = node;

	previ->next = current->next;

	if (current->next)
		current->next->prev = previ;

	current->next = previ;
	current->prev = previ->prev;
	previ->prev = current;

	if (current->prev)
		current->prev->next = current;
	else
		*list = current;
	return (current);
}

/**
 * insertion_sort_list - Use insertion sort algorithm
 *
 * @list: double linked list
 *
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *node;

	if (list == NULL || *list == NULL)
		return;

	node = (*list)->next;
	while (node)
	{
		while (node->prev && (node->prev->n) > (node->n))
		{
			node = swap_one_node(list, node);
			print_list(*list);
		}
		node = node->next;
	}
}
