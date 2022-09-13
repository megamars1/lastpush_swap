#include"push_swap.h"

void clear(t_stacks *a)
{
	free(a);
	write(2,"Error\n",6);
	exit(0);
}

int	ft_lstsize(t_stacks*head)
{
	int	i;

	i = 0;
	while (head)
	{
		head = head->next;
		i++;
	}
	return (i);
}



void	insert_node(int value, t_stacks**head)
{
	t_stacks	*node;
	t_stacks	*h;

	h = *head;
	node = malloc(sizeof(t_stacks));
	if (!node)
		return ;
	node->value = value;
	node->keep = 0;
	node->s = 0;
	if (*head == NULL)
		*head = node;
	else
	{
		while (h->next != NULL)
			h = h->next;
		h->next = node;
	}
	node->next = NULL;
}

// void	last_node(t_stacks**a)
// {
// 	while ((*a)->next)
// 		*a = (*a)->next;
// }

int	ft_atoi_mod(const char *str, t_stacks*a)
{
	int			i;
	int			div;
	long int	r;

	i = 0;
	div = 1;
	r = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\r'
		|| str[i] == '\f' || str[i] == '\v')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			div = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		r = (r * 10) + (str[i++] - 48);
	}
	if ((r * div) < INT_MIN || (r * div) > INT_MAX)
		clear(a);
	return (r * div);
}

