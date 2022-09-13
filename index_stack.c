#include"push_swap.h"

static void	swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

static void	index_stack(t_stacks*head, int *arr, int size)
{
	int	x;

	while (head)
	{
		x = 0;
		while (x <= size - 1)
		{
			if (head->value == arr[x])
			{
				head->index = x;
				break ;
			}
			x++;
		}
		head = head->next;
	}
}

static void	bubble_sort(int p[], int size)
{
	int	x;

	x = 0;
	while (size > 0)
	{
		while (x < size - 1)
		{
			if (p[x] >= p[x + 1])
			{
				swap(p + x, p + x + 1);
			}
			x++;
		}
		x = 0;
		size--;
	}
}

void signarr(t_stacks*a,int size)
{
    t_stacks *tmp=a;
    int i=0;
    int *arr=malloc(size * sizeof(int));
	if(!arr)
		return ;
    while(tmp)
    {
        arr[i++]=tmp->value;
        tmp=tmp->next;
    }
    bubble_sort(arr,size);
    index_stack(a,arr,size);
    free(arr);
}