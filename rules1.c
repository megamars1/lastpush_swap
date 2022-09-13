#include"push_swap.h"

void	sa(t_stacks**a)
{
	int		i;
	t_stacks	*tmp;

	i = ft_lstsize(*a);
	tmp = (*a)->next;
	if (!i || i == 1)
		return ;
	(*a)->next = (*a)->next->next;
	tmp->next = (*a);
	(*a) = tmp;
	write(1, "sa\n", 3);
}

void	sb(t_stacks**b)
{
	int		i;
	t_stacks	*tmp;

	tmp = (*b)->next;
	i = ft_lstsize(*b);
	if (!i || i == 1)
		return ;
	(*b)->next = (*b)->next->next;
	tmp->next = *b;
	*b = tmp;
	write(1, "sb\n", 3);
}

void	ss(t_stacks**a, t_stacks**b)
{
	t_stacks	*tmp;
	int		i;

	tmp = (*a)->next;
	i = ft_lstsize(*b);
	if (i >= 2)
	{
		tmp = (*a)->next;
		(*a)->next = (*a)->next->next;
		tmp->next = (*a);
		(*a) = tmp;
	}
	tmp = (*b)->next;
	i = ft_lstsize(*b);
	if (i >= 2)
	{
		tmp = (*b)->next;
		(*b)->next = (*b)->next->next;
		tmp->next = (*b);
		(*b) = tmp;
	}
	write(1, "ss\n", 3);
}

void	pb(t_stacks**a, t_stacks**b)
{
	t_stacks	*tmp;

	tmp = *b;
	if (!a)
		return ;
	if (!*b)
	{
		*b = *a;
		*a = (*a)->next;
		(*b)->next = NULL;
	}
	else
	{
		tmp = *a;
		*a = (*a)->next;
		tmp->next = *b;
		*b = tmp;
	}
	write(1, "pb\n", 3);
}

void	pa(t_stacks**a, t_stacks**b)
{
	t_stacks	*tmp;

	tmp = *a;
	if (!b)
		return ;
	if (!*a)
	{
		*a = *b;
		*b = (*b)->next;
		(*a)->next = NULL;
	}
	else
	{
		tmp = *b;
		*b = (*b)->next;
		tmp->next = *a;
		*a = tmp;
	}
	write(1, "pa\n", 3);
}
