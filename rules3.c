#include"push_swap.h"

static void	rra_help(t_stacks**head)
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
}

static void	rrb_help(t_stacks**head)
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
}


void	rrr(t_stacks **a, t_stacks **b)
{
	rra_help(a);
	rrb_help(b);
	write(1, "rrr\n", 4);
}