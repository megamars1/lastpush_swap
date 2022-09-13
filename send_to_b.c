#include"push_swap.h"

static void	send_to_b2(t_stacks**a, t_stacks**b, int size)
{
	t_stacks*tmp;

	tmp = *a;
	if(!(*a)->next->keep)
	{
		sa(a);
		pb(a, b);
		return;
	}
	while(!tmp->keep)
		tmp=tmp->next;
	if(tmp->s <= size/2)
		while ((*a)->keep)
				ra(a);
	if(tmp->s > size/2)
		while ((*a)->keep)
				rra(a);
	pb(a, b);
}

void	send_to_b(t_stacks**a, t_stacks**b, int size)
{
	t_stacks	*tmp;
	int i;

	tmp = *a;
	i=0;
	while(tmp)
	{
		if(!tmp->keep)
			i++;
		tmp=tmp->next;
	}
	while(i)
	{
		send_to_b2(a,b,size);
		i--; 
	}
}