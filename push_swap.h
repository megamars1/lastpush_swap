#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include<unistd.h>
# include<string.h>
# include<stdio.h>
# include<stdlib.h>
# include<limits.h>
# include"./libft/libft.h"

typedef struct node
{
	int			value;
	int			index;
	int			keep;
	int			s;
	struct node	*next;
}t_stacks;
void		sa(t_stacks**a);
void		sb(t_stacks**b);
void		ss(t_stacks**a, t_stacks**b);
void		pb(t_stacks**a, t_stacks**b);
void		pa(t_stacks**a, t_stacks**b);
void		ra(t_stacks**head);
void		rb(t_stacks**head);
void		rr(t_stacks**a, t_stacks**b);
void		rra(t_stacks**head);
void		rrb(t_stacks**head);
void		rrr(t_stacks **a, t_stacks **b);
int	ft_atoi_mod(const char *str, t_stacks*a);
void	insert_node(int value, t_stacks**head);
int			ft_lstsize(t_stacks *a);
void clear(t_stacks *a);
void	initialize(int ac, const char*av[], t_stacks**a);
void	check_args(int ac, char const**av);
void check_dupl(t_stacks*a);
void sort_3_numbers(t_stacks**a);
void signarr(t_stacks*a,int size);
void	markup(t_stacks**a, int size);
void	send_to_b(t_stacks**a, t_stacks**b, int size);
void	to_top(t_stacks**a,int sizea, t_stacks**b, int sizeb);
void send_to_a(t_stacks**a,t_stacks**b);
t_stacks* search_best_place(t_stacks *a,t_stacks *ele_a,t_stacks *ele_b);
void	fix(t_stacks**a);
void sort_5_numbers(t_stacks**a,t_stacks**b);

#endif
