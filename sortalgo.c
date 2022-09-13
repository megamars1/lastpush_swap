#include"push_swap.h"

static  void	index_s(t_stacks*a,t_stacks*b)
{
	int	i;

	i = 0;
    if(a)
	while (a)
	{
		a->s = i;
		i++;
		a = a->next;
	}
    i = 0;
    if(b)
	while (b)
	{
		b->s = i;
		i++;
		b = b->next;
	}
}

void	fix(t_stacks**a)
{
	t_stacks	*tmp;
	int		i;

	tmp = *a;
	i = (*a)->value;
	while (tmp)
	{
		if (tmp->value < i)
			i = tmp->value;
		tmp = tmp->next;
	}
	while ((*a)->value != i)
	{
		ra(a);
	}
}

static void	to_top_count(t_stacks*a,int sizea, t_stacks*b, int sizeb)
{
	t_stacks	*tmp;

	tmp = a;
	while (tmp)
	{
		if (tmp->s <= sizea / 2)
			tmp->keep = tmp->s;
		else if (tmp->s > sizea / 2)
			tmp->keep = sizea - tmp->s;
		tmp = tmp->next;
	}
    tmp=b;
    while (tmp)
	{
		if (tmp->s <= sizeb / 2)
			tmp->keep = tmp->s;
		else if (tmp->s > sizeb / 2)
			tmp->keep = sizeb - tmp->s;
		tmp = tmp->next;
	}
}



void	to_top(t_stacks**a,int sizea, t_stacks**b, int sizeb)
{
	t_stacks	*tmp_a;
	t_stacks	*tmp_b;

	index_s(*a,*b);
	to_top_count(*a, sizea,*b,sizeb);
	tmp_a = *a;
	tmp_b = *b;
	while(tmp_b)
	{
		while(tmp_a)
		{
			if(tmp_a->value > tmp_b->value)
			{
				tmp_a=search_best_place(*a,tmp_a,tmp_b);
				tmp_b->keep += tmp_a->keep + 1;
				break;
			}
			tmp_a=tmp_a->next;
		}
		tmp_b=tmp_b->next;
		tmp_a=*a;
	}

}






