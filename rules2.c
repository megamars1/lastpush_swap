#include"push_swap.h"

void	ra(t_stacks**head)
{
	t_stacks	*first;

	first = *head;
	while (first->next != NULL)
		first = first->next;
	first->next = *head;
	first = *head;
	*head = (*head)->next;
	first->next = NULL;
	write(1, "ra\n", 3);
}

void	rb(t_stacks**head)
{
	t_stacks	*first;

	first = *head;
	while (first->next != NULL)
		first = first->next;
	first->next = *head;
	first = *head;
	*head = (*head)->next;
	first->next = NULL;
	write(1, "rb\n", 3);
}

void	rr(t_stacks**a, t_stacks**b)
{
	t_stacks	*first;

	first = *a;
	while (first->next != NULL)
		first = first->next;
	first->next = *a;
	first = (*a);
	(*a) = (*a)->next;
	first->next = NULL;
	first = *b;
	while (first->next != NULL)
		first = first->next;
	first->next = *b;
	first = *b;
	(*b) = (*b)->next;
	first->next = NULL;
	write(1, "rr\n", 3);
}

void	rra(t_stacks**head)
{
	t_stacks	*first;
	t_stacks	*last;

	first = *head;
	last = *head;
	while (last->next != NULL)
		last = last->next;
	while ((*head)->next != NULL)
	{
		if ((*head)->next->next == NULL)
			break ;
		*head = (*head)->next;
	}
	(*head)->next = NULL;
	*head = last;
	(*head)->next = first;
	write(1, "rra\n", 4);
}

void	rrb(t_stacks**head)
{
	t_stacks	*first;
	t_stacks	*last;

	first = *head;
	last = *head;
	while (last->next != NULL)
		last = last->next;
	while ((*head)->next != NULL)
	{
		if ((*head)->next->next == NULL)
			break ;
		*head = (*head)->next;
	}
	(*head)->next = NULL;
	*head = last;
	(*head)->next = first;
	write(1, "rrb\n", 4);
}
