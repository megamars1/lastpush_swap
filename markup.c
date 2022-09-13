#include"push_swap.h"

static void	keep_field(t_stacks*mkhead, t_stacks*a, int size)
{
	t_stacks	*tmp;

	mkhead->keep=1;
	tmp = mkhead;
	while (size > 0)
	{
		if (mkhead->value < tmp->value)
		{
			tmp->keep = 1;
			mkhead = tmp;
		}
		tmp = tmp->next;
		if (!tmp)
			tmp = a;
		size--;
	}
}

static t_stacks*	markuphead(t_stacks*a)
{
	t_stacks	*tmp;
	t_stacks	*big_s;

	tmp = big_s = a;
	while(tmp)
	{
		if(tmp->s > big_s->s)
			big_s=tmp;
		tmp=tmp->next;
	}
	tmp=big_s;
	while(tmp)
	{
		if(tmp->s == big_s->s)
			if(tmp->index < big_s->index)
				big_s=tmp;
		tmp=tmp->next;
	}
	return big_s;
}

static void	s_field(t_stacks*tmp, t_stacks *a, int size)
{
	t_stacks	*fex;
	int		i;

	fex = tmp;
	i = fex->value;
	while (size > 0)
	{
		if (i < tmp->value)
		{
			fex->s++;
			i = tmp->value;
		}
		tmp = tmp->next;
		if (!tmp)
			tmp = a;
		size--;
	}
}

void	markup(t_stacks**a, int size)
{
	t_stacks	*tmp;

	tmp = *a;
	while (tmp)
	{
		s_field(tmp, *a, size);
		tmp = tmp->next;
	}
	tmp=markuphead(*a);
	keep_field(tmp, *a, size);
}