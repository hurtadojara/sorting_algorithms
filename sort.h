#ifndef SORT_H
#define SORT_H
#include <stdio.h>
#include <stdlib.h>
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;
void insertion_sort_list(listint_t **list);
void swap_nodes(listint_t *n_1, listint_t *n_2);
void bubble_sort(int *array, size_t size);
void selection_sort(int *array, size_t size);
void swap_numbers(int *a, int *b);
size_t partition(int *array, int low, size_t high, size_t size);
void swap(int *a, int *b);
void quicksort_mod(int *array, int low, size_t high, size_t size);
void quick_sort(int *array, size_t size);

#endif
