#include"push_swap.h"

void move(t_stacks**a,t_stacks**b,t_stacks*ele_a,t_stacks*ele_b)
{
	if(ele_a->s <= ft_lstsize(*a)/2)
		while((*a)->value != ele_a->value)
			ra(a);
	else if(ele_a->s > ft_lstsize(*a)/2)
		while((*a)->value != ele_a->value)
			rra(a);

	if(ele_b->s <= ft_lstsize(*b)/2)
		while((*b)->value != ele_b->value)
			rb(b);
	else if(ele_b->s > ft_lstsize(*b)/2)
		while((*b)->value != ele_b->value)
			rrb(b);
	pa(a,b);
}

t_stacks* search_best_place(t_stacks *a,t_stacks *ele_a,t_stacks *ele_b)
{
	t_stacks*tmp=a;
	while(tmp)
	{
		if(tmp->value < ele_a->value && tmp->value > ele_b->value)
		{
			ele_a=tmp;
		}
		tmp=tmp->next;
	}
	return ele_a;
}

void send_to_a(t_stacks**a,t_stacks**b)
{
	t_stacks*tmp;
	t_stacks*fex;

	tmp=*b;
	fex=*b;
	while(tmp)//(fex = best ele in b to move)
	{
		if(tmp->keep < fex->keep)
			fex = tmp;
		tmp = tmp->next;
	}
	tmp=*a;
	while(tmp)
	{
		if(tmp->value > fex->value)
			break;
		tmp = tmp->next;
	}
	tmp=search_best_place(*a,tmp,fex);
	move(a,b,tmp,fex);

}