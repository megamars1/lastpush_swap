#include"push_swap.h"

void	check_args(int ac, char const**av)
{
	int	a;
	int	b;

	a = 1;
	b = 0;
	if (ac == 1)
		exit(0);
	while (av[a])
	{
		while (av[a][b] != '\0')
		{
			if ((av[a][b] < '0' | av[a][b] > '9') && (av[a][b] != ' '))
			{
				write(1, "Error", 6);
				exit(1);
			}
			b++;
		}
		a++;
		b = 0;
	}
}

void	initialize(int ac, const char*av[], t_stacks**a)
{
	char	**str;
	int	i;
	int	x;

	i = 1;
	while (i <= ac - 1)
	{
		x = 0;
		str = ft_split(av[i], ' ');
		while (str[x])
			insert_node(ft_atoi_mod(str[x++],*a), a);
		i++;
		free(str);
	}
}

void check_dupl(t_stacks*a)
{
    t_stacks *tmp;

    while(a)
    {
        tmp=a->next;
        while(tmp)
        {
            if(a->value == tmp->value)
                clear(a);
            tmp=tmp->next;
        }
        a=a->next;
    }
}