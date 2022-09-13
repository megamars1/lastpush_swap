#include"push_swap.h"

void sort_3_numbers(t_stacks**a)
{
    if((*a)->value > (*a)->next->value && (*a)->next->value > (*a)->next->next->value && (*a)->next->next->value < (*a)->value)
    {
        sa(a);
        rra(a);
    }
    if((*a)->value < (*a)->next->value && (*a)->next->value > (*a)->next->next->value && (*a)->next->next->value < (*a)->value)
        rra(a);
    if((*a)->value > (*a)->next->value && (*a)->next->value < (*a)->next->next->value && (*a)->next->next->value > (*a)->value)
        sa(a);
    if((*a)->value > (*a)->next->value && (*a)->next->value < (*a)->next->next->value && (*a)->next->next->value < (*a)->value)
    {
        rra(a);
        rra(a);
    }
    if((*a)->value < (*a)->next->value && (*a)->next->value > (*a)->next->next->value && (*a)->next->next->value > (*a)->value)
    {
        rra(a);
        sa(a);
    }
}



void sort_5_numbers(t_stacks**a,t_stacks**b)
{
    pb(a,b);
    pb(a,b);
    sort_3_numbers(a);
    // if((*b)->value > (*b)->next->value)
    // while(*b)/
    
    // send_to_a(a,b);
    // send_to_a(a,b);
    // fix(a);
    // if((*b)->value < (*a)->value)
    //     pa(a,b);
    // if((*b)->value > (*a)->next->next->value)
    // {
    //     pa(a,b);
    //     ra(a);
    // }
    // if((*b)->value > (*a)->value && (*b)->value < (*a)->next->value)
    // {
    //     ra(a);
    //     pa(a,b);
    // }
    // if((*b)->value > (*a)->next->value && (*b)->value < (*a)->next->next->value)
    // {
    //     rra(a);
    //     pa(a,b);
    // }
}